class MyCalendar {
private:
    map<int,int> m;
public:
   bool canAdd(){
       int count=0;
       for (auto entry: m){
           count+=entry.second;
           if(count>1) return false;
       }
       return true;
   }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        if (canAdd()) return true;
        else{
            m[start]--;
            m[end]++;
            return false;
        }
    }
};