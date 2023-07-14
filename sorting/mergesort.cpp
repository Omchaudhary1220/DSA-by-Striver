#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int s,int mid,int e){
    vector<int>temp;
    int i=s;
    int j=mid+1;
    while(i<=mid&&j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=s;i<=e;i++){
        arr[i]=temp[i-s];
    }
    temp.clear();
}
void mergesort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){
    vector<int>arr={50,40,30,20,10};
    mergesort(arr,0,arr.size()-1);
    cout<<"array elements are: ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
