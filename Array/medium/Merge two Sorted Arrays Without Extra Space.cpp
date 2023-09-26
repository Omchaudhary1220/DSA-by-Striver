#include<bits/stdc++.h>
//Brute force solution
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
   int n=a.size();
	 int m=b.size();
	 vector<int>ans;
	 int s1=0,s2=0;
	 while(s1<n&&s2<m){
		if(a[s1]<=b[s2]){
			ans.push_back(a[s1++]);
		} 
		else
		ans.push_back(b[s2++]);
	 }
	 while(s1<n){
		 ans.push_back(a[s1++]);
	 }
	 while(s2<m){
		 ans.push_back(b[s2++]);
	 }
	 int i;
	 for(i=0;i<n;i++){
		 a[i]=ans[i];
	 }
	 int s=i;
     for(int j=0;j<m;j++){
		 b[j]=ans[s++];
	 }
}
//optimised solution
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int m=a.size();
	int n=b.size();
	int left=m-1;
	int right=0;
	while(left>=0&&right<n){
		if(a[left]>b[right]){
			swap(a[left],b[right]);
			left--;
			right++;
		}
		else{
			break;
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
}
