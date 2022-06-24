class Solution {
public:
   bool isPossible(vector<int>& target) {
		int n=target.size();
		long sum=0;
		int max=0;
		for(int i=0;i<n;i++)
		{
			sum+=target[i];
			if(target[max]<target[i])
				max=i;
		}
		long diff=sum-target[max];
		if(diff==1 || target[max]==1)
			return true;
		if(diff>target[max] || diff==0 || target[max]%diff==0)
			return false;
		target[max]%=diff;

		return isPossible(target);
		}
};