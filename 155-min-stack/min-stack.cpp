class MinStack {
private:
    stack<int> st;
    stack<int> tmp;
    int min;
public:
    MinStack() {
        this->min = 2147483647;
    }
    
    void push(int val) {
        if (val < this->min)
            this->min = val;
        st.push(val);
    }
    
    void pop() {
        if (st.empty())
            return;
        if (st.top() == this->min)
        {
            this->min = 2147483647;
            st.pop();
            while (!st.empty())
            {
                if (st.top() < this->min)
                    this->min = st.top();
                tmp.push(st.top());
                st.pop();
            }
            while (!tmp.empty())
            {
                st.push(tmp.top());
                tmp.pop();
            }
            return;
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return this->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */