class Solution {
private:
    int getLength(vector<int>& nums){
        
        int start =-1;
        int i= 1;
        int n = nums.size();
        int end = -1;
        int maxIndex = -1;
        while(i<n){
            
            
            
            if(nums[i] < nums[i-1]){
                
                if(start==-1)
                    start = i-1;
                
                while(start-1>=0 && nums[start-1] > nums[i]){
                    start--;
                }
                
               
                if(maxIndex==-1){
                    maxIndex =i-1;
                }else{
                    maxIndex = nums[maxIndex] < nums[i-1] ? i-1 : maxIndex;
                }
                end = i;
                
            }else if(start>=0 && nums[start] > nums[i] || 
                     maxIndex>=0 && nums[maxIndex]>nums[i] && maxIndex<i){
               
                end=i;
            }
            i++;
        }
        
       
        return end==-1 ? 0 :end-start+1;
        
    }
public:
    int findUnsortedSubarray(vector<int>& nums) {
        return getLength(nums);
    }
};