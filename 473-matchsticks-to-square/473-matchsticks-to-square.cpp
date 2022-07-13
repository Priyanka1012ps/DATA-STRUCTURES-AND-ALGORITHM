class Solution {
public:
    bool dp(vector<int>&a,int sum1,int sum2,int sum3,int sum4,int idx,int &need)
    {
        if(sum1>need || sum2>need || sum3>need || sum4>need)
        {
            return false;
        }
        if(idx==a.size())
        {
            if(sum1==sum3 && sum1==sum2 && sum1==sum4)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if(sum1!=need && sum1+a[idx]>need)
        {
            return false;
        }
        if(sum2!=need && sum2+a[idx]>need)
        {
            return false;
        }
        if(sum3!=need && sum3+a[idx]>need)
        {
            return false;
        }
        if(sum4!=need && sum4+a[idx]>need)
        {
            return false;
        }
        bool flg=false;
        if(sum1<need)
        {
            flg|=dp(a,sum1+a[idx],sum2,sum3,sum4,idx+1,need);
        }
        if(flg==true)
        {
            return true;
        }
        if(sum2<need)
        {
            flg|=dp(a,sum1,sum2+a[idx],sum3,sum4,idx+1,need);
        }
        if(flg==true)
        {
            return true;
        }
        if(sum3<need)
        {
            flg|=dp(a,sum1,sum2,sum3+a[idx],sum4,idx+1,need);
        }
        if(flg==true)
        {
            return true;
        }
        if(sum4<need)
        {
            flg|=dp(a,sum1,sum2,sum3,sum4+a[idx],idx+1,need);
        }
        return flg;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        sort(matchsticks.begin(),matchsticks.end());
        for(int i:matchsticks)
        {
            sum+=i;
        }
        if(sum%4!=0)
        {
            return false;
        }
        int need=sum/4;
        for(int i:matchsticks)
        {
            if(i>need)
            {
                return false;
            }
        }
        return dp(matchsticks,0,0,0,0,0,need);
    }
};