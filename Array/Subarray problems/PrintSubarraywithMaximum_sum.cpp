#include<bits/stdc++.h>
using namespace std;
void maxSum_subarray(int arr[],int n){
    int start=0,end=-1;
    long long sum=0;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            end=i;
            maxi=sum;
        }
        if(sum<0){
          sum=0;
          start=i+1;
        }
    }
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,-1,7,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<"subarray with maximum sum: ";
    maxSum_subarray(arr,n);
    return 0;
}
