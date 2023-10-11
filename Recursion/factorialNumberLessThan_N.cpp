Link:- https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?
  
class Solution
{
public:
    long long ans=1;
    void factorial(long long i,long long n,vector<long long>&v1){
        ans=ans*i;
        if(ans>n){
            return;
        }
        v1.push_back(ans);
        factorial(i+1,n,v1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long>v1;
        factorial(1,N,v1);
        return v1;
        
    }
};
