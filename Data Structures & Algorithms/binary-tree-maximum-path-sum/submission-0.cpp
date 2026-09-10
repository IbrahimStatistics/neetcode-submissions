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
    int maxPath = INT_MIN;

    int helper(TreeNode* root) {
        if (root == nullptr) return 0;

        // Ignore negative sums by clamping to 0
        int maxLeft = max(0, helper(root->left));
        int maxRight = max(0, helper(root->right));

        // Update global maxPath with the split path (Root + Left + Right)
        maxPath = max(maxPath, root->val + maxLeft + maxRight);

        // Return single branch path to parent (Root + max(Left, Right))
        return root->val + max(maxLeft, maxRight);
    }

    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxPath;
    }
};
