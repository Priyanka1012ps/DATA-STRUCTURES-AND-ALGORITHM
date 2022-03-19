class FreqStack {
public:
    unordered_map<int,vector<int>> flist;
    unordered_map<int,int> freq;
    int mx;
    
    FreqStack() {
        mx=0;
    }
    
    void push(int val) {
        
        freq[val]++;
        flist[freq[val]].push_back(val);
        
        mx=max(mx,freq[val]);
    }
    
    int pop() {
        
        int val=flist[mx].back();
        flist[mx].pop_back();
        
        if(flist[mx].size()==0)
            mx--;
        
        freq[val]--;
        
        return val;
    }
};