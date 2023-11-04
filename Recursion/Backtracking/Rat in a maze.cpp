class Solution{
private:
    void Genratepaths(int row,int col,int n,string temp,vector<vector<int>>m,vector<string>&ans){
        if(row==n-1&&col==n-1){
            ans.push_back(temp);
            return;
        }
        if(m[row][col]==0) return;
        m[row][col]=0;
        if((row-1)>=0&&m[row-1][col]==1){
            temp.push_back('U');
            Genratepaths(row-1,col,n,temp,m,ans);
            temp.pop_back();
        }
        if((col-1)>=0&&m[row][col-1]==1){
            temp.push_back('L');
            Genratepaths(row,col-1,n,temp,m,ans);
            temp.pop_back();
        }
        if((col+1)<n&&m[row][col+1]==1){
            temp.push_back('R');
            Genratepaths(row,col+1,n,temp,m,ans);
            temp.pop_back();
        }
        if((row+1)<n&&m[row+1][col]==1){
            temp.push_back('D');
            Genratepaths(row+1,col,n,temp,m,ans);
            temp.pop_back();
        }
    }
public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        string temp;
        Genratepaths(0,0,n,temp,m,ans);
        return ans;
    }
};
