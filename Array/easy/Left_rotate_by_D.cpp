class Solution {
public:
   // Time complexity O(n) space complexity O(n)
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        if(nums.size()==1){
            return;
        }
        if(k>nums.size()){
            k=k%nums.size();
        }
        int limit=nums.size()-k;
        for(int i=limit;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<limit;i++){
            ans.push_back(nums[i]);
        }
        nums=ans;
        ans.clear();
    }
};
// time complexity O(n) and space complexity O(1)
class Solution {
public:
    
    void reverse(vector<int> &a, int i, int j){
        while(i<j){
            swap(a[i],a[j]);
            i++, j--;
        }
    }
    
    void rotate(vector<int> &a, int k) {
        int n=a.size();   
        
        k%=n;
        if(k<0) k += n;
        
        reverse(a,0,n-1);
        reverse(a,0,k-1);
        reverse(a,k,n-1);
    }
};
