/* Structure of binary tree node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    void mirror(Node* root) {
        // code here
        if(root==NULL)
        {
            return;
        }
        queue<Node*> q ;
        q.push(root);
        while(!q.empty())
        {
            Node *curr=q.front();
            q.pop();
            swap(curr->left,curr->right);
            if(curr->left!=nullptr)
            {
                q.push(curr->left);
            }
            if(curr->right!=nullptr)
            {
                q.push(curr->right);
            }
            
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna