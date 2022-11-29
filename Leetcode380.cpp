class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int, int> record;
    RandomizedSet() {

    }

    bool insert(int val) {
        if(!record.count(val)) {
            nums.push_back(val);
            record[val] = nums.size() - 1;
            return true;
        }
        return false;
    }

    bool remove(int val) {
        if(record.count(val)) {
            int removeIndex = record[val];
            swap(record[nums[nums.size() - 1]], record[val]);
            swap(nums[removeIndex], nums[nums.size() - 1]);
            nums.pop_back();
            record.erase(val);
            return true;
        }
        return false;
    }

    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */