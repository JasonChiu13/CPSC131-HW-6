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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) { // if the root ptr is null or the root val equals val
            return root;                           // - returns root
        }
        if (root->val < val) {                     // if root val is less than val
            return searchBST(root->right, val);    // - recurs with the root's right ptr and val
            
        }
        return searchBST(root->left, val);         // else recurs with the root's left ptr and val
    }
};
