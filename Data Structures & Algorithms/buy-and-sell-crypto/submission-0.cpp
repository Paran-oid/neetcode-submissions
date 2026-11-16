class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        
        for(size_t i = 0; i < prices.size(); i++)
        {
            for(size_t j = i + 1; j < prices.size(); j++)
            {
                max_profit = std::max(max_profit, prices[j] - prices[i]);
            }
        }
        return max_profit;
    }
};
