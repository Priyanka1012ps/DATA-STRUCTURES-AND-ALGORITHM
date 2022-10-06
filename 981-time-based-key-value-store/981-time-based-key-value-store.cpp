class TimeMap {
public:
    unordered_map<string, map<int, string>> mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        auto find = mp[key].upper_bound(timestamp);
        if(find == mp[key].begin()) return "";
        find--;
        return find->second;
    }
};
