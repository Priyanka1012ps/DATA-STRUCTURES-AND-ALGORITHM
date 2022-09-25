class MyCircularQueue {
public:
    int *a;
    int cap;
    int rear;
    
    MyCircularQueue(int k) {
        cap=k;
        a= new int[cap];
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(rear==cap-1)
            return false;
        else
        {
           
        rear++;
             a[rear]=value;
        }
              return true;
        
      
    }
    
    bool deQueue()
    {
        if(rear==-1)
            return false;
        else
        {
            for(int i=0;i<rear;i++)
                a[i]=a[i+1];
        }
        rear--;
        return true;
    }
    
    int Front()
    {
         if(rear==-1)
            return -1;
        else
        return a[0];
    }
    
    int Rear() 
    {
        if(rear==-1)
            return -1;
        else return a[rear];
    }
    
    bool isEmpty() {
        if(rear==-1)
            return true;
        else return false;
    }
    
    bool isFull() {
        if(rear==cap-1)
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */