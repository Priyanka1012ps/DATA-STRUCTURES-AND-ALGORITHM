class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans = 0;
        //2d array to store strings having size of 2;
        int ar[26][26] = {0};
        for(string s : words) {
            int a = s[0] - 'a';
            int b = s[1] - 'a';
            if(ar[b][a]) {
                ans += 4;
                ar[b][a]--;
            }
            else ar[a][b]++;
        }
        for(int i = 0; i < 26; i++) {
            if(ar[i][i]) {
                ans += 2;
                break; //middle part of string found.
            }
        }
        return ans;
    }
};