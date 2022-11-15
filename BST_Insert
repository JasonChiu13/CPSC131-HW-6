/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr) {                              // if the root is empty
            return new TreeNode(val);                       // - creates a new node using val
        }
        if (root->val > val) {                              // if the root's val is greater than val
            root->left = insertIntoBST(root->left, val);    // - recurs insertIntoBST to the root's left node
        } else {                                            // if the root's val is less than val
            root->right = insertIntoBST(root->right, val);  // - recurs insertIntoBST to the root's right node
        }
        return root;                                        // returns the current root
    }
};
