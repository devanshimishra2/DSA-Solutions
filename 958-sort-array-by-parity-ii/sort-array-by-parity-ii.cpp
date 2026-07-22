class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int n = nums.size();
        while(i < n && j < n){
            if(nums[i] % 2 == 0){
                i += 2;
            }
            else if(nums[j] % 2 == 1){
                j += 2;
            }
            else{
                swap(nums[i], nums[j]);
                i += 2; 
                j += 2;
            }
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna