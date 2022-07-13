class Solution {
public:
    int maxProfit(vector<int>& prices) {
 int minPrices = INT_MAX, maxProfit=0, profit;
        for ( int i = 0;i < prices.size();i++){
            
            minPrices= min(minPrices,prices[i]);
            profit = prices[i] - minPrices;
            if(profit > maxProfit){maxProfit=profit;}
            
        }
        return maxProfit;
    }
};