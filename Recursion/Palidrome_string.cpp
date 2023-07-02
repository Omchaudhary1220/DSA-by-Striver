#include<bits/stdc++.h>
using namespace std;
bool is_pal(string s,int l,int r){
    if(l>=r){
        return 1;
    }
    if(s[l]!=s[r]){
        return 0;
    }
    return is_pal(s,++l,--r);
}

int main(){
    string s="step on no pets";
    cout<<"is palidrome: "<<is_pal(s,0,s.size()-1)<<endl;
    return 0;
}
