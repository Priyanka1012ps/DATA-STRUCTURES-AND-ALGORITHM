class Solution {
public:
//     void swap(int &a, int &b)
//      {
//     //     int temp=a;
//     //     a=b;
//     //     b=temp;
//         a=a^b;
    
//         b=a^b;
//         a=a^b;
//     }
    void rotate(vector<vector<int>>& m)
    {
        int n= m.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(m[i].begin(),m[i].end());
        }
    }
};
