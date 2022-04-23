class Solution {
public:
    map<string,string> m;
    string h = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned long long counter=0;
    string encode(string longUrl) {
        counter=counter+1;
        string s = get(counter);
        m[s] = longUrl;
        return s;
    }

    
    string decode(string s) {
        return m[s];
    }
    string get(int c)
    {
        string s = "";
        while(c)
        {
            s.push_back(h[c%64]);
           
            c /= 64;
        }
        return s;
    }
};