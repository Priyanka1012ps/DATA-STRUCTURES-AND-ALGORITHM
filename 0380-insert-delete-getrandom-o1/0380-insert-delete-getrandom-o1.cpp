class RandomizedSet {
public:
    set<int> st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) 
    {
        if(!st.count(val))                              \
        {
            st.insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) 
    {
        if(st.count(val))                                     
        {
            st.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() 
    {
        if(st.size()!=0)                         
        {
            return *next(st.begin(),rand()%st.size());     
        }
        return 0;
    }
};