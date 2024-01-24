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
    bool isMirror(TreeNode* r1, TreeNode*r2) {
        if (r1 == nullptr || r2 == nullptr)
            return (r1 == r2);
        if (r1->val != r2->val)
            return false;
        return (isMirror(r1->right, r2->left)
                && isMirror(r1->left, r2->right));
    }
    bool isSymmetric(TreeNode* root) {
        return (root == nullptr || isMirror(root->right, root->left));
    }
};