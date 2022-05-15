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
    int findlevel(TreeNode* root) {
        if(!root) return 0;
        
        int left = findlevel(root->left);
        int right = findlevel(root->right);
        
        return max(left,right) + 1;
        
    }
    
    int sum = 0;
    int level;
    void helper(TreeNode* root,int l) {
        
        if(!root) return;
        
        if(l == level) sum = sum + root->val;
        helper(root->left,l+1);
        helper(root->right,l+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        level = findlevel(root);
        helper(root,1);
        return sum;
    }
};