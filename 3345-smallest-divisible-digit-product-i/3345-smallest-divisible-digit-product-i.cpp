class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++)
        {
            int x=i;
            int num=1;
            while(x)
            {
                num*=x%10;
                x/=10;
            }
            if(num%t==0)
            {
                return i;
            }

        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna