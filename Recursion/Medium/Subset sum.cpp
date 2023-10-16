link:- https://practice.geeksforgeeks.org/problems/subset-sums2234/1
class Solution
{
private:
    void Subarr_sum(vector<int>arr,int sum,int index,vector<int>&ans){
        if(index>=arr.size()){
            ans.push_back(sum);
            return;
        }
        Subarr_sum(arr,sum,index+1,ans);
        sum+=arr[index];
        Subarr_sum(arr,sum,index+1,ans);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        Subarr_sum(arr,0,0,ans);
        return ans;
    }
};
