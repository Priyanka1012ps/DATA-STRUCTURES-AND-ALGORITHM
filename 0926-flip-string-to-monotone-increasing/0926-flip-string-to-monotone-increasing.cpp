class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {
        int count_one = 0;
        int count_flip = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                count_one++;

            else
                count_flip = min(++count_flip, count_one);
        }
        return count_flip;
    }
};