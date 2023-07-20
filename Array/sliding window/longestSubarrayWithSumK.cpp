#include<bits/stdc++.h>
using namespace std;
//brute force solution
int max_length(int arr[],int n,int k){
    int length=0;
    long long sum=0;
    
   /* --Brute force solution with t.c=O(n^3)
   for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int count=0;
            sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==k){
                length=max(length,j-i+1);
            }
        }
    }*/
    
    //optimise brute force solution with O(n^2)
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
           sum+=arr[j];
           if(sum==k){
               length=max(length,j-i+1);
           }
        }
    }
    return length;
}
//better solution with time complexity O(n) and space complexity O(n).
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        long long sum=0;
        int length=0;
        map<int,int>mp;
        for(int i=0;i<N;i++){
            sum+=A[i];
            long long rem=sum-K;
            if(sum==K){
                length=max(length,i+1);
            }
            if(mp.find(rem)!=mp.end()){
                length=max(length,i-mp[rem]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return length;
}
//optimise time complexity when array contains only positive number time complexity O(n+n) and s.c O(1).
int longestSubarrayWithSumK(vector<int> arr, long long k) {
    int left=0,right=0;
    long long sum=arr[0];
    int max_length=0;
    int n=arr.size();
    while(right<n){
        while(left<=right&&sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            max_length=max(max_length,right-left+1);
        }
        right++;
        if(right<n)sum+=arr[right];
    }
    return max_length;
}

int main(){
    int arr[]={10,5,2,7,1,9};
    int n=sizeof(arr)/sizeof(int);
    int k=15;
    int ans=lenOfLongSubarr(arr,n,k);
    cout<<"maximum subarray with sum: "<<ans<<endl;
    return 0;
}
