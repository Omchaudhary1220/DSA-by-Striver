void swap(int* p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
//brute force solution with time and space complexity O(n) and O(n).
vector<int> alternateNumbers(vector<int>&a) {
    vector<int>negative;
    vector<int>positive;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<0){
            negative.push_back(a[i]);
        }
        else{
            positive.push_back(a[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        a[2*i]=positive[i];
        a[2*i+1]=negative[i];
    }
    return a;
}
// optimised solution is using time and space complexity O(n) and O(1).
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int pos_index=0,neg_index=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pos_index]=nums[i];
                pos_index+=2;
            }
            else{
                ans[neg_index]=nums[i];
                neg_index+=2;
            }
        }
        return ans;
    }
};
