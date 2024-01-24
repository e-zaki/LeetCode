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
    TreeNode* ArrayToBST(vector<int>& nums, int start, int end) {
        if (end < start)
            return nullptr;  
        int med = (start + end) / 2;
        TreeNode *tree = new TreeNode(nums[med]);
        tree->left = ArrayToBST(nums, start, med-1);
        tree->right = ArrayToBST(nums, med+1, end);
        return tree;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (!nums.size())
            return nullptr;
        
        int med = nums.size() / 2, start = 0, last = nums.size() - 1;
        TreeNode *BST = new TreeNode(nums[med]);
        BST->left = ArrayToBST(nums, start, med-1);
        BST->right = ArrayToBST(nums, med+1, last);

        return BST;
    }
};