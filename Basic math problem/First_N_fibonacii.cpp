class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
       vector<long long>ans;
       long long first=0;
       long long second=1;
       long long fib;
       int i;
       if(n==1||n==0){
           return {n};
       }
       ans.push_back(1);
       for(i=2;i<=n;i++){
           fib=first+second;
           ans.push_back(fib);
           first=second;
           second=fib;
       }
       return ans;
    }
};
