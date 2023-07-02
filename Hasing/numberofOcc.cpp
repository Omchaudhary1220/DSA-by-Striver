#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int, int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<"number of occuerrence: "<<mp[num]<<endl;
    }
    return 0;
}
