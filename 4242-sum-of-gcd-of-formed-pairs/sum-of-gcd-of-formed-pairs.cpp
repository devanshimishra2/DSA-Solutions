class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        vector<int> prefixGCD(n);
        for(int i = 0; i < nums.size(); i++){
                 maxi = max(maxi, nums[i]); 
                prefixGCD[i] = gcd(nums[i], maxi);
        }
        sort(prefixGCD.begin(), prefixGCD.end());
        long long ans = 0;
        int left = 0;
        int right = n - 1;
        while(left < right){
            ans += gcd(prefixGCD[left], prefixGCD[right]);
            left++;
            right--;
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna