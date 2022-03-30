class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rowNums = matrix.size();
        if (rowNums == 0)
            return false;
        int columnsNum = matrix[0].size();
        int l = 0;
        int r = rowNums * columnsNum - 1;
        
        while (l <= r)
        {
            int m = l + (r - l) / 2;

            int res = matrix[m / columnsNum][m % columnsNum];
            
            if (res < target)
                l = m+1;
            else if (res > target)
                r = m-1;     
            else if (res == target)
                return true;
        }
        return false;
    }
};