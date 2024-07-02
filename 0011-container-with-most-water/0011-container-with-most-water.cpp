class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int i=0;
        int j=height.size()-1;
        int max_area=0;
        while(i<j)
        {
            
            int w=j-i;
            int h= min(height[i],height[j]);
            max_area= max(w*h,max_area);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
            
        }
        
        return max_area;
    }
};