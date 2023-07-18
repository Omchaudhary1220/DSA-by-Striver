#include<bits/stdc++.h>
using namespace std;
//brute force solution for with time complexity O(n^2).
int max_sum(vector<int>&arr,int n,int k){
   int sum=0;
   int maxi=INT_MIN;
   int i,j;
   for(i=0;i<n-k+1;i++){
       sum=0;
       for(j=i;j<(i+k);j++){
           sum+=arr[j];
       }
       cout<<sum<<" ";
       maxi=max(sum,maxi);
   }
   cout<<endl;
   return maxi;
}
//optimised solution with O(n) time complexity using sliding window technique.
long maximumSumSubarray(int k, vector<int> &arr , int N){
        long long sum=0,maxi=INT_MIN;
        int i;
        for(i=0;i<k;i++){
            sum+=arr[i];
        }
        maxi=max(sum,maxi);
        for(i=k;i<N;i++){
            sum-=arr[i-k];
            sum+=arr[i];
            maxi=max(sum,maxi);
        }
        return maxi;
}
int main(){
  vector<int>arr={1,2,5,3,9,7,2,8,5};
  int n=arr.size();
  int k=3;
  int max_subarr_sum=maximumSumSubarray(k,arr,n);
  cout<<"ans is : "<<max_subarr_sum<<endl;
  return 0;
}
