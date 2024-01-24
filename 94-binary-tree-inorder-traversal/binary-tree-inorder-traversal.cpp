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
    void    Traverse(TreeNode* root, vector<int>& vect) {
        if (root == nullptr)
            return;
        Traverse(root->left, vect);
        vect.push_back(root->val);
        Traverse(root->right, vect);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vect;
        Traverse(root, vect);
        return vect;
    }
};