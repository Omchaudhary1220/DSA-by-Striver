#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return binarysearch(arr,mid+1,e,target);
    else
    return binarysearch(arr,s,mid-1,target);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"element index: "<<binarysearch(arr,0,4,2)<<endl;
    return 0;
}
