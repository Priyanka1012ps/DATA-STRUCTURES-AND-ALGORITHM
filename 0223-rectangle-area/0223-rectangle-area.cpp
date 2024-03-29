class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=(ax2-ax1)*(ay2-ay1);
        int area2=(bx2-bx1)*(by2-by1);

        int length=min(ax2,bx2)-max(ax1,bx1);
        int width=min(ay2,by2)-max(ay1,by1);
        int area=0;
        if(length>0 && width>0)
        area=length*width;
        return area1+area2-area;
    }
};