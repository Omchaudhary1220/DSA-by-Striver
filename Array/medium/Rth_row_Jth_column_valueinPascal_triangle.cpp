
#include <bits/stdc++.h>
using namespace std;
/* 
  brute force solution.
  int nCr(int n){
   int fac=1;
   for(int i=1;i<=n;i++)
   fac*=i;
   return fac;
}
int val(int r,int c){
    int nomi1=nCr(r);
    int denom1=nCr(c);
    int denom2=nCr(r-c);
    long long ans=nomi1/(denom1*denom2);
    return ans;
}
*/
//optimise solution
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1); //to skip data loss we are doing in reverse order.
    }
    return res;
}
int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "
            << element << " ";
    return 0;
}
        
