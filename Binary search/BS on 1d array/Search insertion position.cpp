int searchInsert(vector<int>& arr, int m)
{
	int s=0,e=arr.size()-1;
	int elem_ind=-1;
	if(arr.size()==0)return 0;
	if(m>arr[e])return e+1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=m){
			elem_ind=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	
	return elem_ind;
}
