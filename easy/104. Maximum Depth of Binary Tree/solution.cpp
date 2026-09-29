class Solution {
private:
    int getMaxDepth(TreeNode* root, int maxDepth) {
        if (!root) return maxDepth;

        ++maxDepth;

        if (root->left && root->right) {
            return std::max(
                getMaxDepth(root->left, maxDepth),
                getMaxDepth(root->right, maxDepth)
            );
        }
        
        if (root->left) {
            return getMaxDepth(root->left, maxDepth);
        }

        if (root->right) {
            return getMaxDepth(root->right, maxDepth);
        }

        return maxDepth;
    }
public:
    int maxDepth(TreeNode* root) {
        return getMaxDepth(root, 0);
    }
};
