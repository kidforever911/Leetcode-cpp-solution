class Solution {
public:
    int ans = INT_MAX, n;

    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        n = price.size();
        vector<vector<int>> offer;

        for(auto& e : special) {
            int sum = 0;
            bool flag = true;
            for(int i = 0; i < n; i ++) {
                sum += e[i] * price[i];
                if(e[i] > needs[i]) {
                    flag = false;
                    break;
                }
            }
            if(sum <= e[n]) flag = false;
            if(flag) offer.push_back(e);
        }

        dfs(needs, 0, offer, price);
        return ans;
    }

    void dfs(vector<int>& needs, int sum, vector<vector<int>>& offer, vector<int>& price) {
        if(sum >= ans) return;

        ans = min(ans, getPrice(needs, price) + sum);

        for(auto& e : offer) {
            auto temp = needs;
            bool flag = true;
            for(int i = 0; i < n; i ++) {
                temp[i] -= e[i];
                if(temp[i] < 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) dfs(temp, sum + e[n], offer, price);
        }
    }

    int getPrice(vector<int>& needs, vector<int>& price) {
        int sum = 0;
        for(int i = 0; i < n; i ++) {
            sum += needs[i] * price[i];
        }
        return sum;
    }
};