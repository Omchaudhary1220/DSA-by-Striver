Link:- https://leetcode.com/problems/n-queens/
class Solution {
private:
   // function to check if it is not attacking 
    bool selectable(int row,int col,int n,vector<string>box){
        int duprow=row;
        int dupcol=col;
        while(row>=0&&col>=0){
            if(box[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n&&col>=0){
            if(box[row][col]=='Q') return false;
            row++;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
           if(box[row][col]=='Q') return false;
            col--; 
        }
        return 1;
    }
    void solve(int col,int n,vector<string>box,vector<vector<string>>&ans){
      // If we are able to reach last column it means it is one possible way.
        if(col==n){
            ans.push_back(box);
            return;
        }
        for(int row=0;row<n;row++){
            if(selectable(row,col,n,box)){
                box[row][col]='Q';
                solve(col+1,n,box,ans);
                box[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string>box(n,s);
        vector<vector<string>>ans;
        solve(0,n,box,ans);
        return ans;
    }
};
