//brute force solution
vector<int> majorityElement(vector<int> v) {
	vector<int>ans;
	int n=v.size();
	for(int i=0;i<n;i++){
		int count=0;
		if(ans.size()==0||ans[0]!=v[i])
		for(int j=0;j<n;j++){
			if(v[j]==v[i])
			count++;
			if(count>n/3){
				ans.push_back(v[i]);
				break;
			}
		}
		if(ans.size()==2)break;
	}
	return ans;
}
//better solution
#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	map<int,int>mp;
	vector<int>major;
	int n=v.size();
	int majortime=n/3+1;
	for(int i=0;i<n;i++){
	  mp[v[i]]++;
	  if(mp[v[i]]==majortime){
		major.push_back(v[i]);
	  }
	  if(major.size()==2){
		  break;
	  }
	}
	return major;
}
//optimised solution using enhance moore's voting algorithm.
vector<int> majorityElement(vector<int> v) {
	vector<int>major;
	int n=v.size();
	int major_count=n/3+1;
	int elem1=INT_MIN,elem2=INT_MIN;
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(count1==0&&v[i]!=elem2){
			count1++;
			elem1=v[i];
		}
		else if(count2==0&&v[i]!=elem1){
			count2++;
			elem2=v[i];
		}
		else if(v[i]==elem1)count1++;
		else if(v[i]==elem2)count2++;
		else{
			count1--;
			count2--;
		}
	}
    int cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		if(v[i]==elem1)cnt1++;
		if(v[i]==elem2)cnt2++;
	}
	if(cnt1>=major_count)major.push_back(elem1);
	if(cnt2>=major_count)major.push_back(elem2);
	sort(major.begin(),major.end());
	return major;
}
