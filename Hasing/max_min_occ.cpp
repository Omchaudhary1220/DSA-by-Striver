#include<bits/stdc++.h>
using namespace std;
void max_min_occ(int arr[],int n){
    map<int,int>mp;
    int maxcount=0,mincount=n;
    int minval=0,maxval=0;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto itr:mp){
        if(itr.second>maxcount){
            maxcount=itr.second;
            maxval=itr.first;
        }
        if(itr.second<maxcount){
            mincount=itr.second;
            minval=itr.first;
        }
    }
    cout<<"maximum occrruing number: "<<maxval<<endl;
    cout<<"minimum occrruing number: "<<minval<<endl;
}
int main(){
    int arr[]={1,2,3,5,1,2,9,3,4,4,3,1,3,3,9};
    int n=sizeof(arr)/sizeof(int);
    max_min_occ(arr,n);
    return 0;
}
