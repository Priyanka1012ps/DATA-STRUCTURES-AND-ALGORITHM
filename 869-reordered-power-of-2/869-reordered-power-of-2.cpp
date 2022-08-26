class Solution {
public:
   bool reorderedPowerOf2(int n) {
	string s = sortedString(n);
	for(int i = 0; i < 30; ++i){
		if(s == sortedString(1<<i)) return true;
	}
	return false;
}
string sortedString(int n){
	string s = to_string(n);
	sort(s.begin(),s.end());
	return s;
}
};