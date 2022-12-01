class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels={'a','i','e','o','u','A','I','E','O','U'};
        int firstHalf=0, secondHalf=0;
        int len = s.length();
        
        for (int i = 0, j = len/2; i < len/2, j < len; i++, j++){
            
            if(vowels.find(s[i])!= vowels.end()) firstHalf++;
            if(vowels.find(s[j])!= vowels.end()) secondHalf++;
        
        }
    
        return firstHalf==secondHalf;
    }
};