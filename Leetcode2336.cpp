class SmallestInfiniteSet {
public:
    set<int> record;

    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i ++) {
            record.insert(i);
        }
    }

    int popSmallest() {
        int small = *record.begin();
        record.erase(record.begin());
        return small;
    }

    void addBack(int num) {
        record.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */