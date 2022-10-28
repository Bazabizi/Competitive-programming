class MyCircularDeque {
public:
    int n;
    deque<int>ans;
    MyCircularDeque(int k) {
        n=k;
    }
    
    bool insertFront(int value) {
        if(!isFull())
        {
            ans.push_front(value);
            return true;
        }
        else
            return false;
    }
    
    bool insertLast(int value) {
        if(!isFull())
        {
            ans.push_back(value);
            return true;
        }
        else
            return false;
        
    }
    
    bool deleteFront() {
        if(!isEmpty())
        {
            ans.pop_front();
            return true;
        }
        else
            return false;
        
    }
    
    bool deleteLast() {
        if(!isEmpty())
        {
            ans.pop_back();
            return true;
        }
        else
            return false;
    }
    
    int getFront() {
        if(!isEmpty())
        {
           return ans.front();
        }
            return -1;
    }
    
    int getRear() {
        if(!isEmpty())
        {
           return ans.back();
           
        }
            return -1;
    }
    
    bool isEmpty() {
        return (ans.size()==0);
    }
    
    bool isFull() {
        return (ans.size()==n);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
