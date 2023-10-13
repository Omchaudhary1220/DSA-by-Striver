Link:- https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650
// For this problem recursion is not optimzed solution
// Solution with time and space complexity 2^n;
#include <bits/stdc++.h> 
int totalcount(int nStairs,int curr_stair){
    int count=0;
    if((curr_stair!=0)&&(curr_stair==nStairs)) count++;
    if(curr_stair>=nStairs) return count;
    return totalcount(nStairs,curr_stair+1)+totalcount(nStairs,curr_stair+2);
}
int countDistinctWays(int nStairs) {
    return totalcount(nStairs,0);
}
