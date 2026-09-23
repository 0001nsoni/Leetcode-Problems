class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> cnt (nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            cnt[nums[i]]++;
        }
        vector<int> sol;
        for(int i=1;i<cnt.size();i++)
        {
            if(cnt[i]==0)
            {
                sol.push_back(i);
            }

        }

        return sol;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna