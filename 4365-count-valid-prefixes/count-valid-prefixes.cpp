class Solution {
public:
    int countValidPrefixes(string s) {
    
        int count = 0;
        int zero = 0;
        int ones = 0;
        for(char c : s){
            if(c == '0'){
                zero++;
            }
            else{
                ones++;
            }
            if(abs(zero - ones) <= 1){
                count++;
            }
        }
        return count;
    }   
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna