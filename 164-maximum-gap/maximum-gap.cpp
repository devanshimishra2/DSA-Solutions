class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi = 0;
      
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n < 2){
            return 0;
        }
        int i = 0;
        while(i < n-1){
            maxi = max(maxi, nums[i+1]-nums[i]);
            i++;
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna