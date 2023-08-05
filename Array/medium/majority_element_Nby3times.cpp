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
