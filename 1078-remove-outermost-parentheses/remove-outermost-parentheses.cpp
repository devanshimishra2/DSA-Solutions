class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        string result = "";
        for(char c : s){
            if(c == '('){
                if(balance > 0){
                    result += c;
                }
                balance++;
            }
            else{
                balance--;
                if(balance > 0){
                    result += c;
                }
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna