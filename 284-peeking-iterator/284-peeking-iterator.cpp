class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) 
    {
	    doPeek = false;
	}
	
	int peek() 
	{
        if(!doPeek)
        {
            if(Iterator::hasNext())
            {
                peekElement = Iterator::next();
                doPeek = true;
            }
        }
        return peekElement;
	}
	
	int next() 
	{
	    if(doPeek)
        {
            doPeek = false;
            return peekElement;
        }
            
        return Iterator::next();
	}
	
	bool hasNext() const 
    {
        if(doPeek)
            return true;
        
	    return Iterator::hasNext();
	}
    
private:
    bool doPeek;
    int peekElement;
};