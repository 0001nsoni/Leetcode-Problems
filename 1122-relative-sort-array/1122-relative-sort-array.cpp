class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr2.size();i++)
        {
             auto it = find(arr1.begin(), arr1.end(), arr2[i]);
            while(it!=arr1.end())
            {
                ans.push_back(arr2[i]);
                arr1.erase(it);
                it = find(arr1.begin(), arr1.end(), arr2[i]);


            }

        }
        ans.insert(ans.end(),arr1.begin(),arr1.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna