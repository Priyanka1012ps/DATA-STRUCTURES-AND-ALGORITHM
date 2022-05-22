class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(), count = 0;
        int j, k;
        for (int i = 0; i < n - 1; i++) {
            count++;
			
            for (j = i - 1, k = i + 1; j >= 0 && k < n; j--, k++) {
                if (s[j] == s[k])
                    count++;
                else break;
            }
		
            for (int j = i, k = i + 1; j >= 0 && k < n; j--, k++) {
                if (s[j] == s[k])
                    count++;
                else break;
            }
        }
        count++;
        return count;
    }
};