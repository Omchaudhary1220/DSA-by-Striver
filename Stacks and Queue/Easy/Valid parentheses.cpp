class Solution {
private:
    stack<char>st;
public:
    bool isValid(string s) {
       if(s.size()==1 ||s.size()%2!=0) return 0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='(' ||s[i]=='{'|| s[i]=='[') st.push(s[i]);
           else if(st.empty()) return 0;
           else{
               if(st.top()=='(' &&s[i]!=')') return 0;
               if(st.top()=='{' &&s[i]!='}') return 0;
               if(st.top()=='[' &&s[i]!=']') return 0;
               st.pop();
           }
       } 
       if(!st.empty()) return 0;
       return 1;
    }
};
