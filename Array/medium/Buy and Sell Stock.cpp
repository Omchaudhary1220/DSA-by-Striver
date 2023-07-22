problem link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// this is brute force solution using time complexity O(n^2).
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int maxi;
    int profit=0;
    int n=prices.size();
    for(int i=0;i<n-1;i++){
        maxi=prices[i];
        for(int j=i+1;j<n;j++){
            maxi=max(maxi,prices[j]);
        }
        profit=max(profit,maxi-prices[i]);
    }
    return profit;
}
// this is  optimised solution using time complexity O(n).
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
     int buy_price=prices[0];
     int profit=0;
     for(int i=1;i<n;i++){
        if(prices[i]<buy_price){
            buy_price=prices[i];
        }
        else if(prices[i]>buy_price){
            profit=max(profit,prices[i]-buy_price);
        }
     }
     return profit;
    }
};
