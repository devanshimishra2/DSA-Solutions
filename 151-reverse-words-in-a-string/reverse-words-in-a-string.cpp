class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;
        while(i >= 0) {
            while(i >= 0 && s[i] == ' ')
                i--;
            if(i < 0)
                break;
            int j = i;
            while(j >= 0 && s[j] != ' ')
                j--;
            ans += s.substr(j + 1, i - j);
            ans += " ";
            i = j;
        }
        ans.pop_back();
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna