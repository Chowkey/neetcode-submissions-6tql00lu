class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = prices[0];
        int res = 0;
        for (int i = 0; i < prices.size(); i++) {
            res = max(res, prices[i]-minBuy);
            minBuy = min(minBuy, prices[i]);
        }
        return res;
    }
};
