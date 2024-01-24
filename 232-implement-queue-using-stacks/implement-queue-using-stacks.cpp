class MyQueue {
private:
    stack<int> stk1;
    stack<int> stk2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stk2.push(x);
    }
    
    int pop() {
        if (stk1.empty()) {
            while(!stk2.empty()) {
                stk1.push(stk2.top());
                stk2.pop();
            }
        }
        int n = stk1.top();
        stk1.pop();
        return n;
    }
    
    int peek() {
        if (stk1.empty()) {
            while(!stk2.empty()) {
                stk1.push(stk2.top());
                stk2.pop();
            }
        }
        return stk1.top();
    }
    
    bool empty() {
        return (stk1.empty() && stk2.empty());
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