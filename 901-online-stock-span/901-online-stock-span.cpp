class StockSpanner {
public:
     stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        // vector<int>v;
       
        
    //     for(int i=0;i<price.size();i++)
    //     {
    //         if(st.size()==0)
    //             v.push_back(-1);
    //         else if(st.size()>0 and st.top().first >price[i])
    //             v.push_back(st.top().second);
    //         else if(st.size()>0 and st.top().first<=price[i])
    //         {
    //             while(st.size()>0 and st.top().first<=price[i])
    //                 st.pop();
    //             if(st.size()==0)
    //                 v.push_back(-1);
    //             else 
    //                 v.push_back(st.top().second);
    //         }
    //         st.push{price[i],i};
    //     }
    //     vector<int>ans;
    //     for(int i=0;i<price.size();i++)
    //     {
    //         ans.push_back(price[i]-v[i]);
    //     }
    //     return ans;
    // }
        int res=1;
        while(!st.empty() and st.top().first <= price)
        {
            res+= st.top().second;
            st.pop();
        }
        
        st.push({price,res});
        
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */