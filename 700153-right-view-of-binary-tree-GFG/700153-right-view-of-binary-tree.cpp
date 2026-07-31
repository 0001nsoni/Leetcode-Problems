/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void sol(vector<int> &ans,Node *root, int level)
  {
      if(root==nullptr)
      {
          return;
      }
      if(ans.size()==level)
      {
          ans.push_back(root->data);
          
      }
      sol(ans,root->right,level+1);
      sol(ans,root->left,level+1);
  }
    vector<int> rightView(Node *root) {
        //  code here
        vector<int> ans;
        sol(ans,root,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna