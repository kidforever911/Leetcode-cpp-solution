class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>> record;
        for(auto& v : arr) {
            record.push({abs(x - v), v});
            if(record.size() > k) record.pop();
        }
        vector<int> result;
        while(record.size()) {
            result.push_back(record.top().second);
            record.pop();
        }
        sort(result.begin(), result.end());
        return result;
    }
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size() - 1;
        vector<int> result(k);
        while(l < r) {
            int mid = (l + r) >> 1;
            if(arr[mid] >= x) r = mid;
            else l = mid + 1;
        }
        int i = r - 1, j = r;
        while(k --) {
            if(i == -1) j ++;
            else if(j == arr.size()) i --;
            else {
                if(x - arr[i] <= arr[j] - x) i --;
                else j ++;
            }
        }
        for(int index = 0, u = i + 1; u < j; u ++, index ++) {
            result[index] = arr[u];
        }
        return result;
    }
};