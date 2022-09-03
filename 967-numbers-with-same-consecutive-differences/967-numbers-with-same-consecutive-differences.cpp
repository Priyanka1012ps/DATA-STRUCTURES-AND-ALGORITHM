class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
	if (N == 1) return {0,1,2,3,4,5,6,7,8,9};

	vector<int> res;
	vector<int> nums = numsSameConsecDiff(N - 1, K);

	for (auto num : nums)
	{
		if (num == 0) continue;
		int p = num % 10;
		if (p + K <= 9) res.push_back((p + K) + num * 10);
		if (p - K >= 0 && K != 0) res.push_back((p - K) + num * 10);
	}

	return res;
}
};