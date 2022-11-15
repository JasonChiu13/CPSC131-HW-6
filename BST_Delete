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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) {                              // if the current node is empty
            return nullptr;                                 // - returns nullptr
        }
        if (root->val == key) {                             // if the root has the same val as key
            if (!root->right) {                             // - if the root points to nothing on the right
                TreeNode* left = root->left;                // - - makes a new ptr from the root's left node,
                delete root;                                //     deletes the root, then returns the left ptr
                return left;                                     
            } else {                                        // - if the root points to nothing on the left
                TreeNode* right = root->right;              // - - makes a new ptr from the root's right node
                while (right->left) {                       // - - - if that new ptr points to a left ptr,
                    right = right->left;                    //       it takes up that ptr instead
                }                                           // - - the root and the right ptr swap, then 
                swap(root->val, right->val);                //     recurs deleteNode so that we can search
                root->right = deleteNode(root->right, key); //     down the tree and also move it up
            }                                               
        } else if (root->val > key) {                       // if the root's val is greater than key
            root->left = deleteNode(root->left, key);       // - recurs deleteNode to the root's left node
        } else {                                            // if the root's val is less than key
            root->right = deleteNode(root->right, key);     // - recurs deleteNode to the root's right node
        }
        return root;                                        // returns the root
    }
};
