class Solution {
private:
    int first_occ(vector<int>&nums,int target){
        int index=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            index=mid;
            e=mid-1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
      }
      return index;
   }
    int last_occ(vector<int>&nums,int target){
        int index=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            index=mid;
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
     }
     return index;
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int index1=first_occ(nums,target);
        int index2=last_occ(nums,target);
        ans.push_back(index1);
        ans.push_back(index2);
        return ans;
    }
};
