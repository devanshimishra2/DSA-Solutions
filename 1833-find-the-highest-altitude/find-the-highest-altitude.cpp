class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int alti = 0;
        for(int g : gain){
            alti += g;
            maxi = max(maxi, alti);
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna