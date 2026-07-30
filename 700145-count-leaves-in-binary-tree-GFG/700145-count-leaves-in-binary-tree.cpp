/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void count(int &i,Node *root)
    {
        if(root==nullptr)
        {
            return;
        }
        if(root->left==nullptr && root->right==nullptr)
        {
            i++;
            return;
        }
        count(i,root->left);
        count(i,root->right);
    }
    int countLeaves(Node* root) {
        // write code here
        int i=0;
        count(i,root);
        return i;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna