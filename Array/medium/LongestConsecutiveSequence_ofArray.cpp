#include<bits/stdc++.h>
using namespace std;
/*
--brute force solution is taking each value and finding the next value. 
-- time complexity=O(n^2) and s.c=O(1)
bool linearsearch(vector<int>&nums,int target){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return 1;
        }
    }
    return 0;
}
int longestConsecutive(vector<int>&nums){
    int maxi=0;
    int count=1;
    int n=nums.size();
    for(int i=0;i<n;i++){
       count=1;
       int val=nums[i];
       while(linearsearch(nums,val+1)==true){
           val++;
           count++;
       }
       maxi=max(count,maxi);
    }
    return maxi;
}*/
// better solution using sorting.
int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maxi=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==(nums[i+1]-1)){
                count++;
            }
            else{
                maxi=max(count,maxi);
                count=1;
            }
        }
        maxi=max(count,maxi);
        return maxi;
}
//optimise solution
int longestSuccessiveElements(vector<int>&a) {
   int n=a.size();
   int count=1;
   int maxi=0;
   if(n==0)return 0;
   unordered_set<int>st;
   for(int i=0;i<n;i++){
       st.insert(a[i]);
   }
   for(auto i:st){
       if(st.find(i-1)==st.end()){
           count=1;
           int elem=i;
           while(st.find(elem+1)!=st.end()){
               elem++;
               count++;
           }
           maxi=max(count,maxi);
       }
   }
   return maxi;
}
int main(){
    vector<int>nums={0,3,7,2,5,8,4,6,0,1};
    int ans=longestConsecutive(nums);
    cout<<"ans is: "<<ans<<endl;
    return 0;
}
