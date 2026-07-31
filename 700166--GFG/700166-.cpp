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
  int heightcheck(Node*root)
  {
      if(root==nullptr)
      {
          return 0;
      }
      int lhight = heightcheck(root->left);
      if(lhight == -1)
      {
          return -1;
      }
      int rhight = heightcheck(root->right);
      if(rhight==-1)
      {
          return -1;
      }
      if(abs(rhight-lhight)>1)
      {
          return -1;
      }
   return max(lhight, rhight) + 1;
      
  }
    bool isBalanced(Node* root) {
        // code here
        if(heightcheck(root)==-1)
        {
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna