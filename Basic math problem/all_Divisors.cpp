#include <bits/stdc++.h> 
using namespace std;
void printDivisors(int n){
    int i;
    for(i=1;i<=n;i++){
    //to reduce time complexity from O(n) to O(n/2) 
        if(i-1==(n/2)){
            break;
        }
        if(n%i==0)
        cout<<i<<" ";
    }
    cout<<n<<" ";
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
