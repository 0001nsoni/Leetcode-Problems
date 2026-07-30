/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  void in(vector<int> &ans,Node * root)
  {
      if(root==nullptr)
      {
          return;
      }
      in(ans,root->left);
      ans.push_back(root->data);
      in(ans,root->right);
  }
    vector<int> inOrder(Node* root) {
      vector<int> ans;
      in(ans,root);
      return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna