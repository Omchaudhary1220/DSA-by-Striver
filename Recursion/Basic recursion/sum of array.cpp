#include<bits/stdc++.h>
using namespace std;
int totalsum(int arr[],int n){
    if(n<0){
        return 0;
    }
    return arr[n]+totalsum(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<totalsum(arr,n-1);
    return 0;
}
