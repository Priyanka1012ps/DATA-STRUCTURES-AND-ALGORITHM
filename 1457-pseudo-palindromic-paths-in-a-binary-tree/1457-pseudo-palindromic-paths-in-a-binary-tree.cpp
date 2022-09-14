class Solution {
public:
    unordered_map<int,int> mp;
    int count=0;
    bool check(){ 
        bool flag=true;
        for(auto x:mp){
            if(x.second%2!=0){
                if(!flag) return false;
                flag=false;
            } 
        }
        return true;
    }
    void dfs(TreeNode* root){
        if(root==NULL) return; 
        mp[root->val]++;  
        dfs(root->left);
        dfs(root->right);
        if(!root->left && !root->right && check()) count++; 
        mp[root->val]--; 
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return count;
    }
};