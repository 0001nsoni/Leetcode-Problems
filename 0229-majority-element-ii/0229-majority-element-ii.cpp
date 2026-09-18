class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> freq;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(auto f: freq)
        {
            if(f.second>n/3)
            {
                ans.push_back(f.first);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna