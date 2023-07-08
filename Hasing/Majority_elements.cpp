Link:- https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions
class Solution{
  public:
     // Function to find majority element in the aay
    // a: input aay
    // size: size of input aay
    int majorityElement(int a[], int size)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            mp[a[i]]++;
        }
        for(auto i:mp){
           if(i.second>(size/2)){
                return i.first;
            } 
        }
        return -1;
    }
};
