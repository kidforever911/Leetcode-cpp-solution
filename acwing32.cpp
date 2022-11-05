class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for(int i = 0, j = 0; i < array.size(); i ++) {
            if(array[i] % 2 == 1) {
                swap(array[i], array[j]);
                j ++;
            }
        }
    }
};

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> result;
        for(int x : array) {
            if(x % 2 == 1) {
                result.push_back(x);
            }
        }
        for(int x : array) {
            if(x % 2 == 0) {
                result.push_back(x);
            }
        }
        array = result;
    }
};