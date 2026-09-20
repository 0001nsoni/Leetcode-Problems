class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int start=nums[i];
            while(i+1<n && nums[i]+1==nums[i+1]){
            i++;
            }
            if(start!=nums[i]){
            ans.push_back(to_string(start)+"->"+to_string(nums[i]));
            }
            else{
               ans.push_back(to_string(start)) ;
            }


        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna