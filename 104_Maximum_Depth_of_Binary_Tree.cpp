/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        int l_depth = maxDepth(root->left);
        int r_depth = maxDepth(root->right);
        
        return std::max(l_depth, r_depth) + 1;
    }
};