class Solution {
public:
    
    void rec(TreeNode* root , int& val){
          if(root==NULL) return;
          root->val = val++;
          rec(root->left , val);
          rec(root->right , val);
    }
    
    vector<vector<int>> dp;
    
    int solve(TreeNode* root , int id){
        
        if(root == NULL) return 0;
        
        if(dp[root->val][id] != -1)  return dp[root->val][id];
        
        int res;
        
        if(id == 0){
            res = 1 + solve(root->left , 1) + solve(root->right , 1);
            
            if(root->left != NULL && root->right != NULL){
                int ls = solve(root->left , 2) + solve(root->right , 0);
                int rs = solve(root->left , 0) + solve(root->right , 2);
                res = min(res , min(ls , rs));
                
            }else if(root->left != NULL || root->right != NULL){
                res = min(res ,solve(root->left , 2) + solve(root->right , 2));
            }
            
        }else if(id == 2){
            res = 1 + solve(root->left , 1) + solve(root->right , 1);
        }else{
            res = min(solve(root->left , 0) + solve(root->right , 0) ,  1 + solve(root->left , 1) + solve(root->right , 1));
        }
        
        return dp[root->val][id] = res;
    }
    
    int minCameraCover(TreeNode* root) {
        int val=1;
        rec(root , val);
        
        dp.resize(1002 , vector<int>(3 , -1));
        
        return solve(root , 0);
    }
};