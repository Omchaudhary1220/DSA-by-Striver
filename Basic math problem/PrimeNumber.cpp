#include<iostream>
using namespace std;
//time complexity O(n/2).
void isprime(int n){
	if(n==0||n==1){
		cout<<"false";
		return;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"false";
			return;
		}
		if(i-1==(n/2)){
		    break;
		}
	}
	cout<<"true";
}
int main() {
	int n;
	cin>>n;
	isprime(n);
	return 0;
}
