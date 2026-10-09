
class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        int balance = 0;

        for (char ch : s) {
            if (ch == '(') {
                balance += 2;

                if (balance % 2 != 0) {
                    ans++;
                    balance--;
                }
            } 
            else {
                balance--;

                if (balance < 0) {
                    ans++;
                    balance = 1;
                }
            }
        }

        return ans + balance;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna