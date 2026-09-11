class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int curr = 0;
        for(char c : s){
            if(c == '('){
                curr++;
                maxDepth = max(curr, maxDepth);
            }
            else if(c == ')'){
                curr--;
            }
        }
        return maxDepth;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna