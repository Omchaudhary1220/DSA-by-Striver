/* 
  the brute solution of this problem is by sorting the array with time complexity O(nlogn).

  The better solution is counting sort by counting all elements with time complexity O(n+k).
  
  */
#include<bits/stdc++.h>
using namespace std;
void swap(int* p,int* q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
// using dutch flag algorithm with time complexity O(n) and space complexity O(1).
void dnfsort(int arr[],int n){
	int low=0,mid=0;
	int high=n-1;
	while(mid<=high){
		if(arr[mid]==1){
			swap(&arr[low],&arr[mid]);
			low++;
			mid++;
		}
		else if(arr[mid]==0){
			mid++;
		}
		else{
			swap(&arr[mid],&arr[high]);
			high--;
		}
	}
}
int main(){
    int arr[]={0,1,1,0,1,0,1,0,1,1,0,1,0};
	int n=sizeof(arr)/sizeof(int);
	dnfsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
