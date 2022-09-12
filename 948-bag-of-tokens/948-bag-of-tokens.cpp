class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0, result = 0;
        int start = 0, end = tokens.size()-1;
        while(start <= end){
            if(tokens[start] <= power) power -= tokens[start], start++, score++;
            else if (!score) return 0;
            else power += tokens[end], end--, score--;
            result = max(result, score);
        }
        return result;
    }
};