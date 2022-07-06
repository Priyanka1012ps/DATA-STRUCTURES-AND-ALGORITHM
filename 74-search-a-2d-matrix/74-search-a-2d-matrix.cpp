class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int rowNums = matrix.size();
//         if (rowNums == 0)
//             return false;
//         int columnsNum = matrix[0].size();
//         int l = 0;
//         int r = rowNums * columnsNum - 1;
        
//         while (l <= r)
//         {
//             int m = l + (r - l) / 2;

//             int res = matrix[m / columnsNum][m % columnsNum];
            
//             if (res < target)
//                 l = m+1;
//             else if (res > target)
//                 r = m-1;     
//             else if (res == target)
//                 return true;
//         }
//         return false;
        int rows=matrix.size();
        int cols=matrix[0].size();
int l=0;
        int h=(rows*cols)-1;
        
        while(l<=h)
        {
            int  mid=(l+h)/2;
            int res= matrix[mid/cols][mid%cols];
            if(target<res)
            {
                h=mid-1;
                // l++;
            }
            else if(target>res)
            {
                l=mid+1;
                
            }
            else
                return true;
        }
        return false;
    }
};