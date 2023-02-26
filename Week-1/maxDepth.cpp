class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;
        int currMax = max(maxDepth(root->left), maxDepth(root->right));
        return currMax+1;
    }
};
