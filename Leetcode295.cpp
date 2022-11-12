class MedianFinder {
public:
    int count;
    priority_queue<int> down;
    priority_queue<int, vector<int>, greater<int>> up;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        count ++;
        if(down.empty() || num <= down.top()) {
            down.push(num);
            if(down.size() > up.size() + 1) {
                up.push(down.top());
                down.pop();
            }
        } else {
            up.push(num);
            if(up.size() > down.size()) {
                down.push(up.top());
                up.pop();
            }
        }
    }
    
    double findMedian() {
        return (count % 2 == 0 ? (down.top() + up.top()) / 2.0 : down.top());
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */