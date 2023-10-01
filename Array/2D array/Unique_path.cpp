//brute force solution is using recursion and better solution is using DP memorization 
class Solution {
private:
    int all_uniquepath(int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i==m-1&&j==n-1)return 1;
        if(i>=m||j>=n){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=all_uniquepath(i+1,j,m,n,dp)+all_uniquepath(i,j+1,m,n,dp);
    }
public:
    int uniquePaths(int m, int n) {
     vector<vector<int>>dp(m,vector<int>(n,-1));
      return all_uniquepath(0,0,m,n,dp);
    }
};
// optimise solution with time complexity O(n) 
class Solution {
public:
    int uniquePaths(int m, int n) {
       int total_move=m+n-2;
       int right=n-1;
       double ren=1;
       for(int i=0;i<right;i++){
           ren=ren*(total_move-i);
           ren=ren/(i+1);
       }
       return (int)ren;
    }
};
