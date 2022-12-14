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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {                                          // if root is null
            return 0;                                                   // returns 0
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;    // returns a recursion of maxDepth with the left and the 
    }                                                                   // right node, and whichever was recurred more will
};                                                                      // return + 1 which will then return the max depth overall
