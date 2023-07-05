Link:-https://practice.geeksforgeeks.org/problems/second-largest3735/0
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int max1=INT_MIN;
	    int max2=INT_MIN;
	    if(n==0||n==1){
	        return -1;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>max1){
	            max1=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        if((arr[i]!=max1)&&arr[i]>max2){
	            max2=arr[i];
	        }
	    }
    // if there is only a single element in array
	    if(max2==INT_MIN){
	        return -1;
	    }
	    return max2;
	}
};
