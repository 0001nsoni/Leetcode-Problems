class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(auto f:freq)
        {
            if(f.second>n/2)
            {
                return f.first;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna