class Solution {
    public int deleteAndEarn(int[] nums) {
          int include = 0,exclude = 0;
        int count[] = new int[10001];
        for(int val : nums){
            count[val]++;
            
        }
        for(int i = 0; i <= 10000; i++){
          int new_include = exclude + count[i]*i;
          int new_exclude = Math.max(exclude,include);
            
            include = new_include;
            exclude = new_exclude;
        }
        return Math.max(include,exclude);
            
    }
	}
