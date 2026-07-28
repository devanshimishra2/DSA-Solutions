class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 0;
        int n = nums.size();
        int currMax = nums[0];
        for(int i = 1; i < n; i++){
            product = max(product, (currMax - 1) * (nums[i] - 1));
            currMax = max(currMax, nums[i]);
        }
        return product;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna