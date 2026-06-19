class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int n = gain.size();
        for(int i = 1; i <= n; i++){
            int altitute = 0;
            for(int j = 0; j < i; j++){
                altitute += gain[j];
            }
            maxi = max(maxi, altitute);
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna