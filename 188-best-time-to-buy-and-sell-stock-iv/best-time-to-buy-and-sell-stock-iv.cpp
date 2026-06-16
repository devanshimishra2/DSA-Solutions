class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<int>buy(k + 1, INT_MIN);
        vector<int> sell(k+1, 0);
        for(int price : prices){
            for(int j = 1; j <= k; j++){
                buy[j] = max(buy[j] , sell[j-1] - price);
                sell[j] = max(sell[j] , buy[j]+ price);
            }
        }
        return sell[k];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna