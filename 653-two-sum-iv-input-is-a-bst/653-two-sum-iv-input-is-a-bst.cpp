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
    bool findTarget(TreeNode* root, int k)
    {
        vector<int> in;
     inorder(root,in);
        for(int i=0;i<in.size();i++)
            cout<<in[i]<<" ";
      int  i=0;
int j= in.size()-1;
        while(i<j)
        {
            int sum=in[i]+in[j];
            if(sum==k)
            {
                return true;
            }
            else if(sum<k)
                i++;
            else
                j--;
        }
    return false;
    }
   void inorder(TreeNode* root, vector<int>& nums){
        if(root == NULL)return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
};