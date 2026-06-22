class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans = 0;
        while(true){
            string word = "balloon";
            for(char &c : word){
                bool found = false;
                for(char &ch : text){
                    if(ch == c){
                        ch = '#';
                        found = true;
                        break;
                    }
                }
                if(!found) return ans;
            }
            ans++;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna