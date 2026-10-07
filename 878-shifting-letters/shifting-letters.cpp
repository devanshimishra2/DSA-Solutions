class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int shift = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            shift = (shift + shifts[i]) % 26;

            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna