#include<iostream>
using namespace std;
void insertionsort(int arr[],int n,int i){
    if(i>=n){
        return;
    }
    int temp=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    insertionsort(arr,n,i+1);
    
}
int main(){
    int arr[]={100,10,90,80,60,70,50,40,30,20,10};
    int n=sizeof(arr)/sizeof(int);
    insertionsort(arr,n,1);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
