class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
    
         int left = 0, maxLen = 0;
        unordered_set<char> st;

        for(int right = 0; right < n; right++) {
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna