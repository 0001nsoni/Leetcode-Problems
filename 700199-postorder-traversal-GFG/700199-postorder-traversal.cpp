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
  void post(vector<int> &ans,Node *root)
  {
      if(root==nullptr)
      {
          return;
      }
      post(ans,root->left);
      post(ans,root->right);
      ans.push_back(root->data);
      
      
  }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> ans;
        post(ans,root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna