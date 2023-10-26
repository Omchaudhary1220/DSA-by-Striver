Link:- https://leetcode.com/problems/palindrome-partitioning/
class Solution {
private:
    bool ispal(string str,int s,int e){
      while(s<=e){
          if(str[s]!=str[e]) return 0;
          s++;
          e--;
      }
      return 1;
    }
    void getpalidrome(int ind,string s,vector<string>temp,vector<vector<string>>&ans){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(ispal(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                getpalidrome(i+1,s,temp,ans);
                temp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
       vector<vector<string>>ans;
       vector<string>temp;
       getpalidrome(0,s,temp,ans);
       return ans; 
    }
};
