class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       set<int> s;
       for(int i=0;i<nums.size();i++)
       {
        s.insert(nums[i]);
       }
       int i=1;
       while(i<120)
       {
        if(!s.contains(i*k))
        {
            return i*k;
        }
        i++;

       }
       return -1;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna