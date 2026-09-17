class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> count(26, 0);

        for (char c : ransomNote) {
            count[c - 'a']++;
        }

        for (char c : magazine) {
            if (count[c - 'a'] > 0) {
                count[c - 'a']--;
            }
        }

        for (int x : count) {
            if (x > 0)
                return false;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna