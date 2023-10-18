Link:- https://leetcode.com/problems/combination-sum/
class Solution {
private:
    void unique_sum(int ind,int target,vector<int>candidates,vector<int>temp,vector<vector<int>>&ans){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            unique_sum(ind,target-candidates[ind],candidates,temp,ans);
            temp.pop_back();
        }
        unique_sum(ind+1,target,candidates,temp,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        unique_sum(0,target,candidates,temp,ans);
        return ans;
        
    }
};
