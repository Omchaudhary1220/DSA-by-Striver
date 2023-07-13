#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	for(int i=1;i<arr.size();i++){
		if(arr[i-1]==arr[i]){
			arr.erase(arr.begin()+i);
			i--;
		}
		else{
			continue;
		}
	}
	return arr.size();
}
void print(vector<int>ans){
    cout<<"vector elements are: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>ans;
    ans={10,20,20,30,40,50,50,50,50,60,70,70};
    removeDuplicates(ans,ans.size());
    print(ans);
    return 0;
}
