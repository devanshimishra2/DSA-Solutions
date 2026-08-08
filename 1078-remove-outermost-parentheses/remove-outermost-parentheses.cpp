class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int balance = 0;
        for(char ch : s){
            if(ch == '('){
                if(balance > 0){
                    result += ch;
                }
                balance++;
            }
            else{
                balance--;
                if(balance >0){
                    result += ch;
                }
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna