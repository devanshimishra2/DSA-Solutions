class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            freq[c]++;
        priority_queue<pair<int, char>>pq;
        for(auto it : freq){
            pq.push({it.second, it.first});
        }
        string ans;
        while(!pq.empty()){
            auto[count, ch] = pq.top();
            pq.pop();

            ans.append(count, ch);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna