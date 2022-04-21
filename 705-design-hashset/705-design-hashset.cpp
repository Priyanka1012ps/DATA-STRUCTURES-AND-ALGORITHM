class MyHashSet
{
public:
    vector<int> m;
    MyHashSet()
    {
        int s = 1e6 + 1;
        m.resize(s);
    }

    void add(int key)
    {
        m[key] = 1;
    }

    void remove(int key)
    {
        m[key] = 0;
    }

    bool contains(int key)
    {
        return m[key];
    }
};