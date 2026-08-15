class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
           bool allzero = true;
        int result = 0;

        for (int num : nums) {
            if (num != 0) {
                allzero = false;
            }
            result ^= num;
        }

        if (allzero) {
            return 0;
        }

        if (result == 0) {
            return nums.size() - 1;
        }

        return nums.size();
          }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna