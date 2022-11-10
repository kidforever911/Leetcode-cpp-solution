class StockSpanner {
public:
    vector<int> prices;
    int index;
    stack<int> record;
    StockSpanner() {
        prices.clear();
        index = 0;
    }
    
    int next(int price) {
        int result = 0;
        while(!record.empty() && prices[record.top()] <= price) {
            record.pop();
        }
        if(record.empty()) {
            result = index + 1;
        } else {
            result = index - record.top();
        }
        prices.push_back(price);
        record.push(index);
        index ++;
        return result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */