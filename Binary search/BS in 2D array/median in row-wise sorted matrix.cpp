Link:- https://www.codingninjas.com/studio/problems/median-of-a-row-wise-sorted-matrix_1115473
// Brute-force solution 
int median(vector<vector<int>> &matrix, int m, int n) {
    vector<int>arr(m*n);
    int s=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[s++]=matrix[i][j];
        }
    }
    sort(arr.begin(),arr.end());
    return arr[arr.size()/2];
}

// Optimize solution using binary search
int Upperbound(vector<vector<int>> &matrix,int m,int n,int val){
    int s=0,e=n-1;
    int ans=n;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(matrix[m][mid]>val){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int leftcount(vector<vector<int>> &matrix,int m,int n,int val){
    int count=0;
    for(int i=0;i<m;i++){
        count+=Upperbound(matrix,i,n,val);
    }
    return count;
}
int median(vector<vector<int>> &matrix, int m, int n) {
    int s=0,e=1e9;
    int mid;
    int medianindex=(m*n)/2;
    while(s<=e){
       mid=s+(e-s)/2;
       int count=leftcount(matrix,m,n,mid);
       if(count<=medianindex){
           s=mid+1;
       }
       else{
           e=mid-1;
       }
      
    }
    return s;
}
