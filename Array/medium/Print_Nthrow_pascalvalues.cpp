#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
    int ans=1;
    for(int i=0;i<r;i++){
        ans=ans*(n-i);
        ans=ans/(i+1);
    }
    return ans;
}
//brute force solution.
void Rth_pascal(int n){
    for(int i=1;i<=n;i++){
        int ans=nCr(n-1,i-1);
        cout<<ans<<" ";
    }
}
//optimise solution.
void pascal_Rth_row(int n){
    int ans=1;
    cout<<ans<<" "; //printing first column value
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main(){
    int n=10;
    pascal_Rth_row(n);
    return 0;
}
