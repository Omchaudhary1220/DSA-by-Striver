Link:- https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
class Solution{
    public:
    // time complexity of this solution is O(n).
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        map<int,int>mp;
        for(int i=0;i<N;i++){
            if(arr[i]<=P){
                mp[arr[i]-1]++;
            }
        }
        for(int i=0;i<N;i++){
            arr[i]=mp[i];
        }
    }
};
