class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini = prices[0];
        for(int i=0;i<prices.size();i++)
        {int diff=prices[i]-mini;
        profit=max(diff,profit);
        mini=min(prices[i],mini);}
        return profit;
            }

};