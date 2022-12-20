class MyQueue {
public:
    stack<int> record;
    stack<int> back_up;

    MyQueue() {

    }

    void push(int x) {
        record.push(x);
    }

    int pop() {
        while(record.size()) {
            back_up.push(record.top());
            record.pop();
        }
        int x = back_up.top();
        back_up.pop();
        while(back_up.size()) {
            record.push(back_up.top());
            back_up.pop();
        }
        return x;
    }

    int peek() {
        while(record.size()) {
            back_up.push(record.top());
            record.pop();
        }
        int x = back_up.top();
        while(back_up.size()) {
            record.push(back_up.top());
            back_up.pop();
        }
        return x;
    }

    bool empty() {
        return record.empty();
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