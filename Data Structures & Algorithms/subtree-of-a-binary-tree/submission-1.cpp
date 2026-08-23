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
    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;

        bool isLeftSame = isSame(root->left, subRoot->left);
        bool isRightSame = isSame(root->right, subRoot->right);

        return isLeftSame && isRightSame && root->val == subRoot->val;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;
        if(root->val && subRoot->val && isSame(root, subRoot)) return true;
        
        bool isLeft = isSubtree(root->left, subRoot);
        bool isRight = isSubtree(root->right, subRoot);

        return isLeft || isRight;
    }
};
