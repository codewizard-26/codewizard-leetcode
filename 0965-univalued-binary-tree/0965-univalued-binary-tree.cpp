class Solution {
public:
    bool check(TreeNode* root, int value) {
        if (root == nullptr)
            return true;
        if (root->val != value)
            return false;
         bool left = check(root->left, value);
        bool right = check(root->right, value);
        return left && right;
    }
    bool isUnivalTree(TreeNode* root) {

        return check(root, root->val);
    }
};