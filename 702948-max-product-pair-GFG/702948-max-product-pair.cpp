class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        // code here
        int largest = INT_MIN;
int secondLargest = INT_MIN;

for(int num : arr) {
    if(num > largest) {
        secondLargest = largest;
        largest = num;
    }
    else if(num > secondLargest) {
        secondLargest = num;
    }
}

return largest * secondLargest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna