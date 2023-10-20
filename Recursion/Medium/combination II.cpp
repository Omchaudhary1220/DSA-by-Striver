Link:- https://leetcode.com/problems/combination-sum-ii/description/
// recursion solution using O(2^n*K) time complexity

class Solution {
private:
    void Combination_sum(int ind,int target,vector<int>& candidates,vector<int>temp,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<candidates.size();i++){
        if(i>ind&&candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        temp.push_back(candidates[i]);
        Combination_sum(i+1,target-candidates[i],candidates,temp,ans);
        temp.pop_back();  
    }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        Combination_sum(0,target,candidates,temp,ans);
        return ans;    
    }
};
