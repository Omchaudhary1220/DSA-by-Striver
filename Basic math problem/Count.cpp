#include<iostream>
using namespace std;
//time complexity O(n)
int digit_count(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
//time complexity O(1).
int digitCount(int n){
    string s=to_string(n);
    return s.size();
}
int main(){
    int n=584903;
    cout<<"count in "<<n<<" is "<<digitCount(n);
    return 0;
}
