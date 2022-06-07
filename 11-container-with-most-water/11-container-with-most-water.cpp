class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int res=0;
        int e=height.size()-1;
        while(s<e){
            if(height[s]<height[e]){
                res=max(res,height[s]*(e-s));
                s++;
            }
            else{
                res=max(res,height[e]*(e-s));
                e--;
            }
        }
        return res;
        
    }
};
