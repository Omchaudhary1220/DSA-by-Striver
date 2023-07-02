/*
  Example 1:
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153
*/

#include<bits/stdc++.h>
using namespace std;
bool is_Armstrong(int n){
    string num=to_string(n);
    int size=num.size();
    int temp=n;
    int sum=0;
    while(temp){
        sum+=pow((temp%10),size);
        temp/=10;
    }
    return sum==n;
}
int main(){
    int n=1634;
    cout<<"is Armstrong: "<<is_Armstrong(n)<<endl;
    return 0;
}
