/*
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
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> result;
        if(root == nullptr) return result;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int levelSize = q.size();
            for(int i=0;i<levelSize; i++)
            {
                Node * curr = q.front();
                q.pop();
                if(i==0)
                {
                    result.push_back(curr->data);
                }
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
        return result;
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna