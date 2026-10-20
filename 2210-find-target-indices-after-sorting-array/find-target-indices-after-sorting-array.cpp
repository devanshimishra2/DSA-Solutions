class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int s=0, r=0;
        for(int x: nums){
            s+=(x<target);
            r+=(x==target);
        }
        iota(nums.begin(), nums.begin()+r, s);
        nums.resize(r);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna