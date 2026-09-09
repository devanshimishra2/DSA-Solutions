class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        int teams = n / 2;

        sort(skill.begin(), skill.end());

        int j = 0;
        long long sum = 0;

        int target = skill[0] + skill[n - 1];

        for(int i = n - 1; i >= teams; i--) {
            
            if(skill[j] + skill[i] != target)
                return -1;

            sum += 1LL * skill[j] * skill[i];

            j++;
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna