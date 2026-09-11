class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26,0);
        vector<int>window(26,0);
        if(s1.length() > s2.length()){
            return false;
        }
        int k = s1.length();
        for(int i = 0; i < k; i++){
            freq[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }
        if(freq == window){
            return true;
        }
        for(int j = k; j < s2.length(); j++){
            window[s2[j - k] - 'a']--;
            window[s2[j] - 'a']++;
            if(freq == window){
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna