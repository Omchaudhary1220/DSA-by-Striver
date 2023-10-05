link:- https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456
int first_occ(vector<int> nums,int n,int target) {
  if (target < nums[0] || target > nums[n - 1])
    return -1;
  int ans = -1;
  int s = 0, e = n - 1;
  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (nums[mid] == target) {
      ans = mid;
      e = mid - 1;
    } else if (nums[mid] < target) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
  return ans;
}

int last_occ(vector<int> nums,int n,int target) {
  if (target < nums[0] || target > nums[n - 1])
    return -1;
  int ans = -1;
  int s = 0, e = n - 1;
  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (nums[mid] == target) {
      ans = mid;
      s = mid + 1;
    } else if (nums[mid] < target) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
  return ans;
}

int count(vector<int> &arr, int n, int x) {
  int f=first_occ(arr,n,x);
  int l=last_occ(arr,n,x);
  if(f==-1)return 0;
  return (l-f+1);
}
