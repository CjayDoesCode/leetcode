class Solution {
private:
    bool helper(TreeNode* root, int targetSum, int currentSum) {
        if (root == nullptr) return false;
        currentSum += root->val;
        if (!root->left && !root->right && currentSum == targetSum) return true;
        return helper(root->left, targetSum, currentSum) ||
               helper(root->right, targetSum, currentSum);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum, 0);
    }
};
