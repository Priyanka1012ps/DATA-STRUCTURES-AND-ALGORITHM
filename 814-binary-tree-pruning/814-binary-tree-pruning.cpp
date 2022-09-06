class Solution {
public:
	//pair {total ele,no of zeroes}
	pair<int,int> helper(TreeNode *root){
		if(!root) return {0,0};
		pair<int,int> l=helper(root->left);
		pair<int,int> r=helper(root->right);
		if(l.first==l.second) root->left=nullptr;
		if(r.first==r.second) root->right=nullptr;

		if(root->left && root->right){
			return {l.first+r.first+1,l.second+r.second+(1?root->val==0:0)};    
		}
		else if(root->left){
			 return {l.first+1,l.second+(1?root->val==0:0)}; 
		}
		return {r.first+1,r.second+(1?root->val==0:0)};
	}
	TreeNode* pruneTree(TreeNode* root) {
		pair<int,int> p=helper(root);
		if(p.first==p.second) return nullptr;
		return root;
	}
};