class Solution {
public:
vector<vector<int>> ans;
void solve(vector<int>& nums, int index){
    if(nums.size() == index){
        ans.push_back(nums);
        return;
    }
    for(int i = index; i < nums.size(); i++){
        swap(nums[index], nums[i]);
        solve(nums, index + 1);
        swap(nums[index], nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna