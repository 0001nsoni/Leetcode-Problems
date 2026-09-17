class Solution {
public:
    int findLHS(vector<int>& nums) {
    map<int,int> mp;
    for(int x:nums)
    {
        mp[x]++;
    }    
    int result=0;
    for(int x : nums)
    {
        int min_num=x;
        int max_nums=x+1;
        if(mp.count(max_nums))
        result = max(result,mp[max_nums]+mp[min_num]);
    }
    return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna