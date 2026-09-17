class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3,0);
        for(int i:nums){
            freq[i]++;
        }
        nums.clear();
        int j=0;
        for(int i:freq)
        {
            while(i!=0)
            {
                nums.push_back(j);
                i--;
            }
            j++;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna