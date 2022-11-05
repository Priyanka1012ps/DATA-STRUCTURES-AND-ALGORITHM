class Solution {
public:
    vector<vector<int>> generate(int num)
    {
        vector<vector<int>>ans;
   
//         for(int i=0;i<num;i++)
//         {
//                  vector<int>row(i+1,1);
//             for(int j=1;j<i;j++)
//             {
//                 row[j] = ans[i-1][j] + ans[i-1][j-1];
//             }
//             ans.push_back(row);
       
//     }
//         return ans;
//     }
    //     for(int i=0;i<num;i++)
    //     {
    //         vector<int>v(i+1,1);
    //         for(int j=1;j<i;j++)
    //         {
    //             v[j]=ans[i-1][j]+ans[i-1][j-1];
    //         }
    //         ans.push_back(v);
    //     }
    //     return ans;
    // }
    vector<vector<int>>r(num);
    for(int i=0;i<num;i++)
    {
        r[i].resize(i+1);
        r[i][0]=r[i][i]=1;
        for(int j=1;j<i;j++)
        {
            r[i][j]=r[i-1][j]+r[i-1][j-1];
        }
    }
    return r;

    }
};