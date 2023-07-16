#include<iostream>
using namespace std;
void insertionsort(int arr[],int n,int i){
    if(i>=n){
        return;
    }
    int temp=arr[i];
    int j=i-1;
    int swapped=0;
    while(j>=0&&arr[j]>temp){
        swapped=1;
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    if(swapped==1)
    insertionsort(arr,n,i+1);
    
}
int main(){
    int arr[]={50,40,30,10,20};
    int n=sizeof(arr)/sizeof(int);
    insertionsort(arr,n,1);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
