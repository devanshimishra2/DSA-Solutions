class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<long long , int>mp;
        long long sum = 0;
        int maxi = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(sum == k){
                maxi = i+1;
            }
            if(mp.find(sum - k) != mp.end()){
                maxi = max(maxi , i - mp[sum - k]);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna