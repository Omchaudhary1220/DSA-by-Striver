#include<bits/stdc++.h>
using namespace std;
void swap(int* p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void reverse_array(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    swap(&arr[l],&arr[r]);
    reverse_array(arr,++l,--r);
}
void print(int arr[],int n){
    cout<<"Array is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n);
    reverse_array(arr,0,n-1);
    print(arr,n);
    return 0;
}
