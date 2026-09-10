class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        int flips = 0;
        int counter = 0;
        for(auto ch : s){
            if(ch == '1'){
                counter++;
            }
            else{
                flips++;
            }
            flips = min(counter, flips);
        }
        return flips;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna