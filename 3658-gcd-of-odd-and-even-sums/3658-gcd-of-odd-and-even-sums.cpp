class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenSum =0;
        int oddSum = 0;
        int odd = 1; 
        int even = 2;

        for(int i = 0; i < n; i++){
            oddSum += odd;
            evenSum += even;
            even += 2;
            odd+= 2;

        }
        return gcd(oddSum, evenSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna