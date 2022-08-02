class Solution {
public:
    
    long long get_smallers(vector<int>& numbers , long long target){
        long long low = 0 , high = numbers.size() - 1;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(numbers[mid] <= target){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        long long low = matrix[0][0] , high = matrix[n - 1][n - 1];
        int smallers = 0;
        while(low <= high){
            long long mid = low + (high - low)/2;
            smallers = 0;
            for(int i = 0 ; i < matrix.size() ; ++i){
                smallers += get_smallers(matrix[i] , mid);
            }
            if(smallers < k){
                low = mid + 1;    
            } else {
                high = mid - 1;  
            }
        }
        return low;
    }
};