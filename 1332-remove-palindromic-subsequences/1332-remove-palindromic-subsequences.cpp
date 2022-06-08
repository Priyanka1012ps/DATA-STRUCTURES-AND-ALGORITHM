class Solution {
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left < right){
            if(s.at(left) != s.at(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public:
    int removePalindromeSub(string s) {
        if(s.empty()) return 0;

        if(isPalindrome(s)) return 1;

        return 2;
    }
};