// Optimized solution-1
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1||nums[0]<nums[n-1])return nums[0];
        int s=0,e=n-1;
        int ans=nums[n-1];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]) s=mid+1;
            else{
                ans=nums[mid];
                e=mid-1;
            }
        }
        return ans;
    }
};
// optimise solution-2
class Solution {
public:
    int findMin(vector<int>& nums) {
       int ans=INT_MAX;
       int s=0,e=nums.size()-1;
       while(s<=e){
         int mid=s+(e-s)/2;
         if(nums[s]<=nums[e]){
           ans=min(ans,nums[s]);
           break;
         }
         if(nums[s]<=nums[mid]){
           ans=min(ans,nums[s]);
           s=mid+1;
         }
         else{
           ans=min(ans,nums[mid]);
           e=mid-1;
         }
       }
       return ans;
    }
};
