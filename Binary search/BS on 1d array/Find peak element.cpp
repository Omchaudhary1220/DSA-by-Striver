link:- https://leetcode.com/problems/find-peak-element/submissions/1069388945/
// brute using linear search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[0]>nums[1]) return 0;
            }
            else if(i==(n-1)){
                if(nums[i]>nums[n-2])return i;
            }
            else{
                if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                    return i;
                }
            }
        }
      return -1;
    }
};
// optimized solution by binary search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n=nums.size();
       if(n==1)return 0;
       if(nums[0]>nums[1])return 0;
       if(nums[n-1]>nums[n-2])return n-1;
       int s=1,e=n-2;
       while(s<=e){
           int mid=s+(e-s)/2;
           if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])return mid;
           else if(nums[mid]>nums[mid-1]){
               s=mid+1;
           }
           else{
               e=mid-1;
           }
       }
       return -1;
    }
};
