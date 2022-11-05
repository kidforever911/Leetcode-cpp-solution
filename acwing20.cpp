class MyQueue {
public:
    stack<int> record;
    stack<int> copy;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        record.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        copyStack(record, copy);
        int x = copy.top();
        copy.pop();
        copyStack(copy, record);
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        copyStack(record, copy);
        int x = copy.top();
        copyStack(copy, record);
        return x;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return record.empty();
    }
    
    void copyStack(stack<int> &a, stack<int> &b) {
        while(a.size()) {
            b.push(a.top());
            a.pop();
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */