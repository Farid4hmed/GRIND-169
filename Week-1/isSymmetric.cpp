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
    bool isSymmetric(TreeNode* root) {
        return checkSubtree(root->left, root->right);
    }

    bool checkSubtree(TreeNode* sub1, TreeNode* sub2){
        if(sub1==NULL && sub2==NULL)return true;
        else if(sub1==NULL || sub2==NULL)return false;

        return (sub1->val==sub2->val && checkSubtree(sub1->left, sub2->right) && checkSubtree(sub1->right, sub2->left));

    }
};
