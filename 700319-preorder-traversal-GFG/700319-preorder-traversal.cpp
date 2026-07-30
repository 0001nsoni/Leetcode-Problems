/* Structure of Tree Node
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  void pre(vector<int> &ans,Node *root)
  {
      if(root==nullptr)
      {
          return;
      }
      ans.push_back(root->data);
      pre(ans,root->left);
      pre(ans,root->right);
  }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> ans;
        pre(ans,root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna