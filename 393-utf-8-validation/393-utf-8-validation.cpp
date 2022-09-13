class Solution {
public:
    bool validUtf8(vector<int>& arr) {
        
        int n = arr.size ();
        for (int i = 0; i < n; i++)
        {
            if ((arr [i] >> 7) == 0) continue;
            else if ((arr [i] >> 5) == 6 and i + 1 < n and (arr [i + 1] >> 6) == 2) i++;
            else if ((arr [i] >> 4) == 14 and i + 2 < n and (arr [i + 1] >> 6) == 2 and (arr [i + 2] >> 6) == 2) i += 2;
            else if ((arr [i] >> 3) == 30 and i + 3 < n and (arr [i + 1] >> 6) == 2 and (arr [i + 2] >> 6) == 2 and (arr [i + 3] >> 6) == 2) i += 3;
            else return false;
        }
        
        return true;
    }
};