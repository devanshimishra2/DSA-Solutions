class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> next(2, 0);
        vector<int> curr(2, 0);
        for(int index = prices.size() - 1; index >= 0;index--){
            curr[1] = max(-prices[index] + next[0] , next[1]);
            curr[0] = max(prices[index] + next[1], next[0]);
            next = curr;
        }
        return next[1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna