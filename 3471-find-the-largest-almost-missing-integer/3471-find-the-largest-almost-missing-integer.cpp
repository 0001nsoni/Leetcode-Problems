class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int> freq;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            set<int> st;

            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for (int x : st) {
                freq[x]++;
            }
        }

         int ans = -1;

        for (auto &m : freq) {
            if (m.second == 1) {
                ans = max(ans, m.first);
            }
        }

        return ans;
        }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna