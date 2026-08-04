class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        int left = 0;
        int sum = 0;
        for(int right = 0; right < n; right++){
            sum += arr[right];
            while(sum > target && left <= right){
                sum -= arr[left];
                left++;
            }
            if(sum == target){
                return {left+1, right + 1};
            }
        }
        return {-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna