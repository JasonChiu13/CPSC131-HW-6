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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> tree;                   // creates a vector that represents the tree
        stack<TreeNode*> stack;             // creates a stack
        while(root || !stack.empty()){      // loops unless root doesn't exist or the stack is empty
            while(root){                    // - while root exists
                stack.push(root);           // - - puts root on the stack, then turns root into the
                root = root->left;          //     left node until there's nothing left of root
            }
            root = stack.top();             // - turns root into the node on top of the stack
            stack.pop();                    //   removes the top of the stack that was just copied
            tree.push_back(root->val);      //   adds val of root to the tree
            root = root->right;             //   turns root into the next right node
        }
        return tree;                        // returns the tree
    }
};
