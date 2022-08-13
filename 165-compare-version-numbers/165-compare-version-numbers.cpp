// class Solution {
// public:
//     int compareVersion(string version1, string version2)
//     {
//         int len1 = version1.size();
//         int len2 = version2.size();
//         int i=0;
//         int j=0;
//         int n1, n2;
//         while(i<len1 or j<len2)
//         {
//              n1=0;
//             n2=0;
//             while(i<len1 and version1[i]!='.')
//             {
//                 n1=n1*10+(version1[i]-'0');
//                 i++;
//             }
//             while(j<len2 and version1[j]!='.')
//             {
//                 n2=n2*10+(version2[j]-'0');
//                 j++;
//             }
//             if(n1<n2)
//                 return -1;
//             else if(n1>n2)
//                 return 1;
//             i++;
//             j++;
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i = 0, j = 0, v1Len = v1.size(), v2Len = v2.size(), n1, n2;
        while (i < v1Len || j < v2Len) {
            n1 = 0;
            n2 = 0;
            while (i < v1Len && v1[i] != '.') {
                n1 = n1 * 10 + (v1[i] - '0'); 
                i++;
            }
            while (j < v2Len && v2[j] != '.') {
                n2 = n2 * 10 + (v2[j] - '0');
                j++;
            }    
            if (n1 < n2) return -1;
            else if (n1 > n2) return 1;
            i++;
            j++;
        }
        return 0;
    }
};