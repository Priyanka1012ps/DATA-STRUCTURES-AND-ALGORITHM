using ll = long long;
class Solution {
public:
    ll makeop(char op, ll l, ll r) {
        switch (op) {
        case '+':
            return l + r;
        case '-':
            return l - r;
        }
        assert(false);
    }

    pair<ll, ll> eval(int start, const string& s) {
        int n = s.size();
        ll ans = 0;
		ll curDig = 0;
        char op = '+';
        int i = start;
        while (i < n) {
			 if (s[i] == '(') {
                auto p = eval(i + 1, s);
                ans = makeop(op, ans, p.first);
                i = p.second;
                continue;
            } else if (s[i] == ')') {
                ans = makeop(op, ans, curDig);
				curDig = 0;
				return {ans, i + 1};
			} else if (isdigit(s[i])) {
                while (i < n && isdigit(s[i])) {
                    curDig = curDig * 10 + s[i++] - '0';
                }
                continue;
            } else if (s[i] == '+' || s[i] == '-') {
                ans = makeop(op, ans, curDig);
				curDig = 0;
                op = s[i];
            }
            i++;
        }
        if (curDig) {
			ans = makeop(op, ans, curDig);
		}
        return make_pair(ans, n);
    }

    ll calculate(const string& s) {
        auto [ans, _] = eval(0, s);
        return ans;
    }
};