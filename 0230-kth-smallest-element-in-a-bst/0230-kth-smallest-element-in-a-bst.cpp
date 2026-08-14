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
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
        return inorder(root,k,i);
    }
    int inorder(TreeNode* root, int k,int &i){
        if(root==NULL) return -1;
        int x= inorder(root->left,k,i);
        if(x!=-1) return x;
        i++;
        if(i==k) return root->val;
        return inorder(root->right,k,i);
    }
};