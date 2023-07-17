Link:- https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0,j=0;
    int n1=a.size();
    int n2=b.size();
    vector<int>ans;
    while(i<n1 &&j<n2){
        if(a[i]<=b[j]){
            if(ans.size()==0||ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0||ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(ans.back()!=a[i])
        ans.push_back(a[i]);
        i++;
    }
    while(j<n2){
        if(ans.back()!=b[j])
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}
