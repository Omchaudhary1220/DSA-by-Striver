#include<iostream>
using namespace std;
void printsubArray(int arr[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<"All subarray are:"<<endl;
    printsubArray(arr,n);
    return 0;
}
