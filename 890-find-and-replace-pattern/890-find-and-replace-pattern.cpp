class Solution {
public:
	bool match(string s, string t){
		unordered_map<char,char> mp1,mp2;
		for(int i=0;i<s.length();i++){
			  if(mp1.find(s[i])==mp1.end()) mp1[s[i]]=t[i];
			  if(mp2.find(t[i])==mp2.end()) mp2[t[i]]=s[i];
			  if(mp1[s[i]]!=t[i] || mp2[t[i]]!=s[i]) return false;
		}
		return true;
	}
	vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
		vector<string>res;
		for(int i=0;i<words.size();i++)
			if(match(words[i],pattern))res.push_back(words[i]);
		return res;
	}
};