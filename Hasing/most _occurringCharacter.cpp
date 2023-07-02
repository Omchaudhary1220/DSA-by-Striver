/* 
program to demonstare hashmap
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="this is anni";
    char arr[26]={0};
    for(int i=0;i<26;i++){
        if(s[i]!=' '){
        int index=s[i]-'a';
        arr[index]++;
        }
    }
    int max=*max_element(arr,arr+26);//to find count of maximum occurring  letter
    char ch='a'+(max_element(arr,arr+26)-arr); //to find letter
    cout<<"maximum letter in string: "<<ch<<endl;
    cout<<"number of times "<<ch<<" came: "<<max<<endl;
    cout<<"maximum letter index: "<<(max_element(arr,arr+26)-arr)<<endl;//to find index
    return 0;
}
