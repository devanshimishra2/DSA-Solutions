class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < 0){
                swap(minProd, maxProd);
            }
            maxProd = max(nums[i] , nums[i]*maxProd);
            minProd = min(nums[i], nums[i]*minProd);
            ans = max(ans, maxProd);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna