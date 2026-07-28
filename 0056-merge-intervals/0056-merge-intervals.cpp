class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(), intervals.end());
        for(auto interval : intervals){
            if(result.empty() || result.back()[1] < interval[0]){
                result.push_back(interval);
            }
            else{
                result.back()[1] = max(result.back()[1], interval[1]);
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna