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
int helper(TreeNode* root, int k){
    if(root->left == nullptr && root->right == nullptr) return (root->val == k);

    bool left = false, right = false;
    if(root -> left) left = helper(root -> left, k-root->val);
    if(root -> right) right = helper(root -> right, k-root->val);
    return (left || right);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        bool ans = false;
        ans = helper(root, targetSum);
        return ans;
    }
};