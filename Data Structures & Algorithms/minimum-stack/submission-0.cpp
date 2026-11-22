class MinStack {
private:
    std::stack<int> _stack;
    std::stack<int> _minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        _stack.push(val);
        int val_to_add = std::min(val, _minstack.empty() ? val : _minstack.top());
        _minstack.push(val_to_add);
    }
    
    void pop() {
        _stack.pop();
        _minstack.pop();
    }
    
    int top() {
        return _stack.top();
    }
    
    int getMin() {
        return _minstack.top();
    }
};
