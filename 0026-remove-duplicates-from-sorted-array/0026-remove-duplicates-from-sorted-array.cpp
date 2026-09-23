class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=1;
        while(j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                i++;
                j++;
                
            }
            else{
                 nums.erase(nums.begin() + j);
            }

        }
        return nums.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna