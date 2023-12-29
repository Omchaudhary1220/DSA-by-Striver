Link:- https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
// Brute force solution
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>ans;
        for(int i=0;i<n;i++){
          int find=0;
          for(int j=i+1;j<n;j++){
              if(arr[j]>arr[i]){
                  ans.push_back(arr[j]);
                  find=1;
                  break;
              }
          }
          if(find==0) ans.push_back(-1);
        }
        return ans;
    }
};
// optimize solutuion using stack
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long>st;
        vector<long long>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && (arr[i]>=st.top())) st.pop();
            if(st.empty()) ans[i]=-1;
            else
            ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
