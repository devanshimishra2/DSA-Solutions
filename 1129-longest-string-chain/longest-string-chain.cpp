class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        vector<int> chainLen(n, 1);
        int maxi = 1;

        sort(words.begin(), words.end(), [](string& a, string& b){
            return a.size() < b.size();
        });

        for(int i = 1; i < n; i++)
        {
            for(int prev = i - 1; prev >= 0; prev--)
            {
                if(words[prev].size() == words[i].size()) continue;
                else if(words[prev].size() + 1 < words[i].size()) break;

                int size = words[prev].size();
                int cnt = 0;
                int p1 = 0, p2 = 0;
                while(p2 < size && cnt <= 1)
                {
                    if(words[i][p1] == words[prev][p2])
                    {
                        p1++;
                        p2++;
                    }
                    else
                    {
                        cnt++;
                        p1++;
                    }
                }

                if(cnt <= 1)
                {
                    chainLen[i] = max(chainLen[i], chainLen[prev] + 1);
                }
                maxi = max(chainLen[i], maxi);
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna