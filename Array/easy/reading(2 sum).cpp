problem link:- https://www.codingninjas.com/studio/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
/* 
  given an array and we have to find a pair which is equal to target.
  */

//brute force solution is uisng two loop to find all pair and check is equal.

// better solution putting all value in map and checking how much more value is needed if more value is present in map it means we will add both value to get target.
//time complexity of map approch:- O(n) and S.C=O(n)
//space optimised solution is by sorting array with time complexity O(nlogn).
string read(int n, vector<int> book, int target)
{
    int s=0;
    int e=n-1;
    sort(book.begin(),book.end());
    while(s<e){
        long long sum=book[s]+book[e];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            s++;
        }
        else{
            e--;
        }
    }
    return "NO";
}
