class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]==0 && j<nums2.size())
            {
                nums1[i]=nums2[j++];

            }
        }
        sort(nums1.begin(),nums1.end());
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna