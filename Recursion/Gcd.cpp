#include<iostream>
using namespace std;
//time complexity is O(n)
int gcd(int a,int b){
    int min=(a<b)?a:b;
    int i;
    for(i=min;i>=0;i--){
        if((a%i==0)&&(b%i==0)){
            return i;
        }
    }
    return 0;
}
//time complexity O(logɸmin(a,b)).
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else if(b>a){
        return GCD(b,a);
    }
    else{
        return GCD(b,a%b);
    }
}
int main(){
    int a=12;
    int b=18;
    cout<<"GCd is "<<GCD(a,b)<<endl;
    return 0;
}
