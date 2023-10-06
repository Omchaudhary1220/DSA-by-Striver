Link:- https://www.codingninjas.com/studio/problems/rotation_7449070
// Brute-force is using liner search and finding smallest element index and returning.
// optimize solution using binary search
int findKRotation(vector<int> &nums){
    int n=nums.size();
    if(n==1||nums[0]<nums[n-1])return 0;
    int s=0,e=n-1;
    int ans=nums[n-1];
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]>=nums[0]) s=mid+1;
        else{
          ans=mid;
          e=mid-1;
        }
    }
    return ans;
}
