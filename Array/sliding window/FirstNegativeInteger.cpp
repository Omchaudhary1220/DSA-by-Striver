Link:- https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
using namespace std;
//this is brute force solution with time complexity O(n^2).
vector<int> FirstNegativeInteger(int A[],int N,int K) {
    int i,j;
    vector<int>ans;
    for(i=0;i<N-K+1;i++){
        for(j=i;j<(i+K);j++){
            if(A[j]<0){
                ans.push_back(A[j]);
                break;
            }
            if(j==(i+K-1)){
                ans.push_back(0);
            }
        }
    }
    return ans;
}
//this is optimise solution with sliding window concept with time complexity O(n) and space complexity O(k). 
vector<int> printFirstNegativeInteger(int A[],int N, int K) {
     vector<int>ans;
     queue<int>q;
     int i,s=0;
     for(i=0;i<N;i++){
         if(A[i]<0){
            q.push(i);
         }
         if(!q.empty()&&((i-q.front())>=K)){
             q.pop();
         }
         if(i==(s+K-1)){
             if(q.empty()){
                 ans.push_back(0);
             }
             else{
                ans.push_back(A[q.front()]);
             }
             s++;
         }
     }
     return ans;
 }

int main(){
    int A[]={-8,2,3,-6,10};
    int N=sizeof(A)/sizeof(int);
    int K=5;
    vector<int>ans=printFirstNegativeInteger(A,N,K);
    cout<<"Values are: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
