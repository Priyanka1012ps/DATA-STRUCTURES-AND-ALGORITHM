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
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        if(nums.size()==0)
            return NULL;
        TreeNode* ans = bst(nums,0,nums.size()-1);
        
        return ans;
    }
    TreeNode* bst(vector<int>&nums,int start,int end)
    {
        if(start>end)
            return NULL;
        
        int mid= start+(end-start)/2;
        TreeNode* node= new TreeNode (nums[mid])  ;
    node->left=bst(nums,start,mid-1);
        node->right=bst(nums,mid+1,end);
            return node;
        
    }
};