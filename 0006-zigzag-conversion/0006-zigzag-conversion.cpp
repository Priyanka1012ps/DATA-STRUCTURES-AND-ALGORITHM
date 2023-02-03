class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string res;        
        int i;
        for (int step = 0; step < numRows; step++) {
            i = step;
            while (i < s.length()) {
                res.push_back(s[i]);
                i += numRows*2 - 2;
                if (step != 0 && step != numRows - 1) {
                    int i0 = i - step * 2;
                    if (i0 < s.length()) res.push_back(s[i0]);
                }
            }
        }
        return res;
    }
};