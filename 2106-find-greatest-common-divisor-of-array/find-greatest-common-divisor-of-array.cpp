class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int n =  nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
            if(nums[i] < smallest){
                smallest = nums[i];
            }
        }
        return gcd(smallest, largest);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna