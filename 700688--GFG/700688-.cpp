/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>ans;
        queue<Node*> q;
        if(root==NULL)
        {
            return ans;
        }
        
        q.push(root);
        bool rtol=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int> row(size);
            for(int i=0;i<size;i++)
            {
                Node *front=q.front();
                q.pop();
                int index=(rtol)?i:(size-1-i);
                row[index] = front->data;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
                
                
            }
            ans.insert(ans.end(),row.begin(),row.end());
            rtol=!rtol;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna