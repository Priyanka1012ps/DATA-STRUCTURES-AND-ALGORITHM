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
    TreeNode *n1{nullptr}, *n2{nullptr}, *lastnode{nullptr}; //n1: first anomly, n2: second anomly, lastnode: last visited node
public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(n1->val, n2->val);
    }
    
    void inorder(TreeNode* root){
        if(not root) return;
        inorder(root->left);
        if(lastnode and root->val < lastnode->val){
            if(n1) {
                n2 = root;
                return;
            }
            
                n1 = lastnode, n2 = root;
        }
        lastnode = root;
        inorder(root->right);
    }
};