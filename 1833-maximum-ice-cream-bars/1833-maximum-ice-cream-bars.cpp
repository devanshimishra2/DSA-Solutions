class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int icecreams = 0;
        for(int cost : costs){
            if(cost <= coins){
                coins -= cost;
                icecreams++;
            }

            else{
                break;
            }
        }
        return icecreams;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna