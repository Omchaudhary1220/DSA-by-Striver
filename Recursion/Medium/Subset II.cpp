Link:- https://leetcode.com/problems/subsets-ii/
class Solution {
private:
    void Unique_subsets(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if((i!=ind)&&nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            Unique_subsets(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        Unique_subsets(0,nums,ds,ans);
        return ans;
    }
};
