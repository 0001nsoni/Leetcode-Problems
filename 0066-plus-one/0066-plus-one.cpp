class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        for(int i=digit.size()-1;i>=0;i--)
        {
            if(digit[i] < 9)
           {
            digit[i]++;
            return digit;

           } 
           digit[i]=0;
        }
        digit.insert(digit.begin(),1);
        return digit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna