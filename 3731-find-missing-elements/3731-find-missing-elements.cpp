class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int val = nums[0];
        vector<int> sol;
        for(int i=1;i<nums.size();i++)
        {
            while(val + 1 < nums[i])
            {
                sol.push_back(val + 1);
                val++;
            }
            val = nums[i];

        }
        return sol;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna