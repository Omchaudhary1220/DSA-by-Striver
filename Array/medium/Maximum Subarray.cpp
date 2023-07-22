/*
  brute force solution for this problem is run two loop and find each sum and update maxi. 
  t.c=O(n^2)
  s.c=O(1)
  */

// optimise solution for this problem is using kadane's algorithm with t.c=O(n) and s.c=O(1).
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        long long maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
