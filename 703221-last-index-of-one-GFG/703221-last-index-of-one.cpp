class Solution {
  public:
    int lastIndex(string s) {
        int index = -1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
            {
                index=i;
            }
        }
    return index;
        
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna