link:- https://leetcode.com/problems/single-element-in-a-sorted-array/
/* 
brute force solution using linear search
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n=nums.size();
       if(n==1)return nums[0];
       for(int i=0;i<n;i++){
           if(i==0&&nums[i]!=nums[i+1])return nums[i];
           else if(i==n-1&&nums[n-1]!=nums[n-2])return nums[i];
           else{
               if(nums[i]!=nums[i+1]&&nums[i]!=nums[i-1])return nums[i];
           }
       }
       return -1;
    }
};
*/
// Optimized solution with t.c=O(logn)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n=nums.size();
       if(n==1)return nums[0];
       if(nums[0]!=nums[1])return nums[0]; 
       if(nums[n-1]!=nums[n-2])return nums[n-1];
       int s=0,e=n-1;
       while(s<=e){
           int mid=s+(e-s)/2;
           if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])return nums[mid];
           if((!(mid&1)&&nums[mid]==nums[mid+1])||((mid&1)&&nums[mid]==nums[mid-1])){
               s=mid+1;
           }
           else{
               e=mid-1;
           }
       }
       return -1;
    }
};
