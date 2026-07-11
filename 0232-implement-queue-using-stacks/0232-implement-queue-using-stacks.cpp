class MyQueue {
    queue<int> q;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int r = q.front();
        q.pop();
        return r;
    }
    
    int peek() {
        int s = q.front();
        return s;
    }
    
    bool empty() {
        return q.empty();
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