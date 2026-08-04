/*
Definition for Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void noSib(Node *root,vector<int> & ans)
  {
      if(root==nullptr)
      {
          return;
      }
      if(root->left!=nullptr && root->right!=nullptr)
      {
          noSib(root->left,ans);
          noSib(root->right,ans);
      }
     else if(root->left!=nullptr)
     {
         ans.push_back(root->left->data);
         noSib(root->left,ans);
         
     }
     else if(root->right!=nullptr)
     {
         ans.push_back(root->right->data);
         noSib(root->right,ans);
         
     }
      
  }
    vector<int> noSibling(Node* root) {
        // code here
        vector<int> ans;
        noSib(root,ans);
         if (ans.empty())
        ans.push_back(-1);
    else
        sort(ans.begin(), ans.end());
    
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna