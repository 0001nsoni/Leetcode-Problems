class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
     vector<int> x;
     vector<int> y;
     for(int i=0;i<n;i++)
     {
        x.push_back(nums[i]);
       
     }
     for(int i=n;i<nums.size();i++)
     {

       y.push_back(nums[i]);
     
     }
     int j=0;
     int k=0;
     for(int i=0;i<nums.size();i++)
     {
        nums[i++]=x[j++];
        nums[i]=y[k++];

     }
return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna