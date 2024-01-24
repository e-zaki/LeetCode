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
    void    fillAns(TreeNode* root, vector<string>& ans, string str) {
        if (!root || (!root->left && !root->right)) {
            ans.push_back(str); return ;
        }
        if (root->left)
            fillAns(root->left, ans, str+"->"+to_string(root->left->val));
        if (root->right)
            fillAns(root->right, ans, str+"->"+to_string(root->right->val));
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (!root)
            return ans;
        fillAns(root, ans, to_string(root->val));
        return ans;
    }
};