#include<bits/stdc++.h>
using namespace std;
int power_ofTwo(int n){
    if(n<=0) return 1;
    return 2*power_ofTwo(n-1);
}
int main(){
    cout<<power_ofTwo(10);
    return 0;
}
