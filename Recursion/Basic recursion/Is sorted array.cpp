class Solution {
  private:
    int issorted(int arr[],int i){
    if(i<=0)return 1;
    if(arr[i]<arr[i-1]){
        return 0;
    }
    return issorted(arr,i-1);
    
    }
  public:
    bool arraySortedOrNot(int arr[], int n) {
        return issorted(arr,n-1);
    }
};
