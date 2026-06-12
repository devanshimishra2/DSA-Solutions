class Solution {
public:
    vector<string> ans;

    void solve(int n, int open, int close, string curr) {
        if(open == n && close == n) {
            ans.push_back(curr);
            return;
        }

        // try to add "(" if possible
        if(open < n) {
            solve(n, open + 1, close, curr + "(");
        }

        // try to add ")" if possible
        if(close < open) {
            solve(n, open, close + 1, curr + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0, "");
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna