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
private:
    void addLeftLeaves(TreeNode* root, int *asum, int sign) {
        if (!root)
            return;
        if (sign && !root->left && !root->right)
            (*asum) += root->val;
        addLeftLeaves(root->left, asum, 1);
        addLeftLeaves(root->right, asum, 0);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        addLeftLeaves(root, &sum, 0);
        return sum;
    }
};