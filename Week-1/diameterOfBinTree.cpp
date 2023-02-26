class Solution {
public:
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        findHeight(root);
        return diameter;
    }

    int findHeight(TreeNode* root){
        if(root==NULL)return 0;

        int left = findHeight(root->left);
        int right = findHeight(root->right);

        diameter = max(diameter, left+right);

        return 1 + max(left, right);
    }
    
};
