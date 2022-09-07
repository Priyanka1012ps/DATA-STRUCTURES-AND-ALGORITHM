class Solution {
public:
    string tree2str(TreeNode* t) {
        if(!t) return "";
        string l = tree2str(t->left);
        string r = tree2str(t->right);
        if(l=="" && r =="") return to_string(t->val);
        return to_string(t->val) +(l.length()?'('+l+')':"()")+ (r.length()?'('+r+')':"");
    }
};