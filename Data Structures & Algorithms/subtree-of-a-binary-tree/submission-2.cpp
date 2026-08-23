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

        if(isSame(root, subRoot)) return true;
        
        bool isLeft = isSubtree(root->left, subRoot);
        bool isRight = isSubtree(root->right, subRoot);

        return isLeft || isRight;
    }
};