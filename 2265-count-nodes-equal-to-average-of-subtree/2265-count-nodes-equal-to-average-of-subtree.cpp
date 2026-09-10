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
    pair<int,int>sumNode(TreeNode* root,int &ans){
        if (root==NULL) return{0, 0};
        pair<int,int>ls=sumNode(root->left,ans);
        pair<int,int>rs=sumNode(root->right,ans);
        int sum=ls.first+rs.first+root->val;
        int count=ls.second+rs.second+1;
        if (root->val==sum/count) ans++;
        return{sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        sumNode(root, ans);
        return ans;
    }
};