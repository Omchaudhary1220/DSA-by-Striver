Link:- https://www.codingninjas.com/studio/problems/lower-bound_8165382
// Brute force is using liner search.
// optimise solution using O(logn)
int lowerBound(vector<int> arr, int n, int x) {
	int ans=-1;
	int s=0,e=n-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=x){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	if(ans==-1)return n;
}
