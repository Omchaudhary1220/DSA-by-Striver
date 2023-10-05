link:- https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401
int floor_val(vector<int>a,int n,int x){
	int ans=-1;
	if(x<a[0])return -1;
	int s=0,e=n-1;
	while(s<=e){
	   int mid=s+(e-s)/2;
	   if(a[mid]<=x){
		   ans=a[mid];
		   s=mid+1;
	   }
	   else{
		   e=mid-1;
	   }
	}
	return ans;
}

int ceil_val(vector<int>a,int n,int x){
	int ans=-1;
	if(a[n-1]<x)return -1;
	int s=0,e=n-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(a[mid]>=x){
			ans=a[mid];
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor_value=floor_val(a,n,x);
	int ceil_value=ceil_val(a,n,x);
	return {floor_value,ceil_value};
}
