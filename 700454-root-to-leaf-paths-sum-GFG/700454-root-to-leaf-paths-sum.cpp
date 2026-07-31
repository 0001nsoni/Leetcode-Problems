/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */
class Solution {
  public:
  void sol(Node *root,int val,int &sum)
  {
      if(root == nullptr)
            return;

        val = val * 10 + root->data;

    
        if(root->left == nullptr && root->right == nullptr)
        {
            sum += val;
            return;
        }

        sol(root->left, val, sum);
        sol(root->right, val, sum);
      
  }
    int treePathsSum(Node *root) {
        // code here
        int sum=0;
        sol(root,0,sum);
        return sum;      
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna