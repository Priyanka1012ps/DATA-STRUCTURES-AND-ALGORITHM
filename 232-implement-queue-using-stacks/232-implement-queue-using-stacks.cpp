class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    
    MyQueue() {
        
    }
    
    
    void push(int x) 
    {
       input.push(x); 
    }
    
    int pop()
    {
       
      int l; 
        
     if(output.empty() ==false )
        {
             l = output.top();
         output.pop();
          
        }
        else
        {
         while(input.empty()==false)
        {
            output.push(input.top());
            input.pop();
            
        }
         l=output.top();
            output.pop();
        }
        return l;
    }
    
    int peek() 
    {
          int l; 
        
     if(output.empty() ==false )
        {
             l = output.top();
        
          
        }
        else
        {
         while(input.empty()==false)
        {
            output.push(input.top());
            input.pop();
            
        }
         l=output.top();
          
        }
        return l;
    }
    
    
    bool empty() 
    {
        if(output.empty() and input.empty())
            return true;
        
            return false ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */