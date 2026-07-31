/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        if(root==nullptr)
        {
            return{};
        }
        queue<Node *>q;
        vector<int> res;
        q.push(root);
      
        while(!q.empty()){
            int len=q.size();
            //res.push_back({});
            for(int i=0;i<len;i++)
            {
                Node *node = q.front();
                q.pop();
                res.push_back(node->data);
                if(node->left!=nullptr)
                {
                    q.push(node->left);
                }
                if(node->right!=nullptr)
                {
                    q.push(node->right);
                }
            }
               
        }
            return res;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna