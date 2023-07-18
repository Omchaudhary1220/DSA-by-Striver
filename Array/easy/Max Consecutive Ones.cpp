class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=INT_MIN;
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxi=max(maxi,count);
                count=0;
            }
            else
            count++;
        }
        // for edge case when last element is also 1.
        maxi=max(maxi,count);
        return maxi;
    }
};
