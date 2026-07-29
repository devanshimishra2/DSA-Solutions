class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            words.push_back(temp);;
        }
        string ans;
        for(int i = words.size() - 1; i >= 0; --i){
            if(i != words.size() - 1) ans+= " ";
            ans += words[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna