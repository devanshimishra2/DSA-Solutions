class Solution {
public:
int atMostK(vector<int>& nums, int k){
    unordered_map<int,int>mp;
    int left = 0, count = 0;
    int n = nums.size();
    for(int right = 0; right < n; right++){
        mp[nums[right]]++;
        while(mp.size() > k){
            mp[nums[left]]--;
            if(mp[nums[left]] == 0){
                mp.erase(nums[left]);
            }
            left++;
        }
        count += (right - left + 1);
    }
    return count;

}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna