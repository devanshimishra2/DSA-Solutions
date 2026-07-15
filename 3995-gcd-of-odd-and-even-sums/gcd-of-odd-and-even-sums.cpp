class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenSum =0;
        int oddSum = 0;
       

        for(int i = 0; i < n; i++){
            oddSum += 2*i -1;
            evenSum += 2*i;
            

        }
        return gcd(oddSum, evenSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna