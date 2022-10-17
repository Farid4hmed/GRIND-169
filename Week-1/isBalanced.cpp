class Solution {
public:
    bool verdict = true;
    bool isBalanced(TreeNode* root) {
        heightofsubtree(root);
        return verdict;
    }
    
    int heightofsubtree(TreeNode* root){
        if(root == NULL)return 0;
        int left = heightofsubtree(root->left);
        int right = heightofsubtree(root->right);
        
        if(abs(left-right)>1)verdict = false;
        
        return 1 + max(left, right);
    }
};
