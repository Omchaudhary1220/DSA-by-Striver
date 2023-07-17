#include<bits/stdc++.h>
using namespace std;
int maximaum_Consecutive_ones(vector<int>&arr,int n){
    int maxi=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            maxi=max(maxi,count);
            count=0;
        }
        else{
            count++;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={1,0,0,1,0,1,1,1,1,0,0,1,1,0,1};
    int n=arr.size();
    int ans=maximaum_Consecutive_ones(arr,n);
    cout<<"ans is :"<<ans<<endl;
    return 0;
}
