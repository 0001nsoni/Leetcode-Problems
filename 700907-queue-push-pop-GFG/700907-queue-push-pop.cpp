class Solution {
  public:
    queue<int> fillQ(const vector<int>& arr) {
    queue<int> Q;

    for (int x : arr) {
        Q.push(x);
    }

    return Q;
}

void emptyQ(queue<int>& q) {
  while (!q.empty()) {
        cout << q.front();
        q.pop();

        if (!q.empty())
            cout << " ";
    }
    cout << "\n";
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna