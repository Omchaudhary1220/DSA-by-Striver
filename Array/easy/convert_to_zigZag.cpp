Link:- https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1?page=1&sprint=a663236c31453b969852f9ea22507634&sortBy=submissions
class Solution {
  public:
    void swap(int* p,int* q){
        int temp=*p;
        *p=*q;
        *q=temp;
    }
    void zigZag(int arr[], int n) {
        if(n<3){
            return;
        }
        for(int i=1;i<n;i+=2){
            if(arr[i-1]>arr[i]){
                swap(&arr[i-1],&arr[i]);
            }
            if(arr[i+1]>arr[i]){
                swap(&arr[i+1],&arr[i]);
            }
        }
    }
};
