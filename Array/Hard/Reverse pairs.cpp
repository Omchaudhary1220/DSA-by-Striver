//brute force solution with time complexity O(n^2)
link:-https://leetcode.com/problems/reverse-pairs/
int reversePairs(vector<int> &arr, int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>INT_MAX/2){
                return 0;
            }
            if(arr[i]>(2*arr[j])){
                count++;
            }
        }
    }
    return count;
}
// optimized solution with time complexity O(2n*logn).
class Solution {
private:
    int merge(vector<int>&nums,int s,int mid,int e){
        vector<int>temp;
        int count=0;
        int left=s;
        int right=mid+1;
        int i=s;
        int j=mid+1;
        while(i<=mid&&j<=e){
            if(nums[i]>(2*(long long)nums[j])){
                count+=(mid-i+1);	
                j++;
            }
            else{
                i++;
            }
        }
       
        while(left<=mid&&right<=e){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }
        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=e){
            temp.push_back(nums[right++]);
        }
        for(int i=s;i<=e;i++){
            nums[i]=temp[i-s];
        }
        return count;
}
    int mergesort(vector<int>&nums,int s,int e){
        int count=0;
        if(s>=e){
            return count;
        }
        int mid=s+(e-s)/2;
        count+=mergesort(nums,s,mid);
        count+=mergesort(nums,mid+1,e);
        count+=merge(nums,s,mid,e);
        return count;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};
