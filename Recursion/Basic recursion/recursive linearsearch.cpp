#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int target){
    if(n<0)return -1;
    if(arr[n]==target) return n;
    return linearsearch(arr,n-1,target);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"index is: "<<linearsearch(arr,n-1,123);
    return 0;
}
