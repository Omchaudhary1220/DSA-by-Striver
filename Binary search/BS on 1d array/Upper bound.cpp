link:- https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
int upperBound(vector<int> &arr, int x, int n){
	int ans=-1;
	int s=0,e=n-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]>x){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	if(ans==-1)return n;
	return ans;
}
