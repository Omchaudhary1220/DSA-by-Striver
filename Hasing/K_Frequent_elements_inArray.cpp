Link:- https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=top-k-frequent-elements-in-array
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>p;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto itr:mp){
            p.push({itr.second,itr.first});
        }
        for(int i=0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
int main(){
    vector<int>arr={1,1,1,3,2,2};
    int k=2;
    Solution obj;
    vector<int>ans=obj.topK(arr,k);
    for(auto i:ans){
        cout<<i<<" "; 
    }
    return 0;
}
