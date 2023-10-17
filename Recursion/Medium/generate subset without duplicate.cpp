Link:- https://leetcode.com/problems/subsets/submissions/1074294702/
class Solution {
private:
    void unique_subset(vector<int>nums,vector<int>&temp,int ind,vector<vector<int>>&ans){
        ans.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            temp.push_back(nums[i]);
            unique_subset(nums,temp,i+1,ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        unique_subset(nums,temp,0,ans);
        return ans;
    }
};

// same apporch with different implemention
class Solution {
private:
    void all_subset(vector<int>nums,vector<int>temp,int ind,vector<vector<int>>&ans){
        if(ind>=nums.size()){
            ans.push_back(temp);
            return;
        }
        all_subset(nums,temp,ind+1,ans);
        temp.push_back(nums[ind]);
        all_subset(nums,temp,ind+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int ind=0;
        all_subset(nums,temp,ind,ans);
        return ans;
    }
};
