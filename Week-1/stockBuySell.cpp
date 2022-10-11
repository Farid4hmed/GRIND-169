class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start = 0;
        int n = prices.size();
        int maxProfit = 0;
        
        for(int i=1; i<n; i++){
            if(prices[i] < prices[start]){
                start = i;
                continue;
            }
            maxProfit = max(maxProfit, (prices[i] - prices[start]));
        }
        
        return maxProfit;
    }
};
