Link:- https://leetcode.com/problems/permutations/submissions/1087445242/
// brute-force solution 
class Solution {
private:
    void genrate_permutation(vector<int>nums,vector<int>temp,vector<int>freq,vector<vector<int>>&permutation){
        if(temp.size()==nums.size()){
            permutation.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
            temp.push_back(nums[i]);
            freq[i]=1;
            genrate_permutation(nums,temp,freq,permutation);
            freq[i]=0;
            temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>permutation;
        vector<int>temp;
        vector<int>freq(nums.size(),0);
        genrate_permutation(nums,temp,freq,permutation);
        return permutation;
    }
};

// Optimize solution by doing swapping
class Solution {
private:
    void swap(int* p,int* q){
        int temp=*p;
        *p=*q;
        *q=temp;
    }
    void getpermute(int ind,vector<int>nums,vector<vector<int>>&ans){
        if(ind>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(&nums[ind],&nums[i]);
            getpermute(ind+1,nums,ans);
            swap(&nums[ind],&nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
        getpermute(0,nums,ans);
        return ans;
    }
};
