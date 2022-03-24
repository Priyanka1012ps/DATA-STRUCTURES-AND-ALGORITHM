class Solution {
public:
    
    int numRescueBoats(vector<int>& people, int limit) {
        
        int i=0;
        int j=people.size()-1;
        int c=0;
        sort(people.begin(),people.end()); 
		 if(people[0]==limit)
			 return j+1;
        while(i<=j) {
            if(people[i]+people[j]<=limit)
                i++;
            j--;
            c++;
        }      
        return c;
    }
};
