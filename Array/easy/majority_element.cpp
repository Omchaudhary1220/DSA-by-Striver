/* brute solution for this problem is run 2 loop and find count and check if it is greater than n/2 then return. 
  t.c=O(n^2)
  s.c=O(1)
  */

/* better solution is using map to store count and by traversing in map and finding majority element time and space complexity O(n) and O(n).
*/

// optimised solution is using moore's voting algorithm with time and space complexity O(n) and O(1).
int majorityElement(vector<int> v) {
	int elem;
    int count=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            elem=v[i];
        }
        else if(v[i]==elem){
            count++;
        }
        else{
            count--;
        }
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(v[i]==elem){
            count1++;
        }
        if(count1>n/2){
            return elem;
        }
    }
    return -1;
}
