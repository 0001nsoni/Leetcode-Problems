class Solution {
  public:
       bool areRotations(string &s1, string &s2) {

        if(s1.size() != s2.size())
            return false;

        return (s1 + s1).find(s2) != string::npos;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna