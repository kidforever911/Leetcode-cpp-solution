const int N = 26;
const int INF = 10000000;

class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        const int n = source.size();
        
        int d[N][N];
        for(int i = 0; i < N; i ++) {
            for(int j = 0; j < N; j ++) {
                d[i][j] = INF;
            }
            d[i][i] = 0;
        }
        
        for(int i = 0; i < original.size(); i ++) {
            int x = original[i] - 'a', y = changed[i] - 'a';
            d[x][y] = min(d[x][y], cost[i]);
        }
        
        for(int k = 0; k < N; k ++) {
            for(int i = 0; i < N; i ++) {
                for(int j = 0; j < N; j ++) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
        
        long long result = 0;
        for(int i = 0; i < n; i ++) {
            if(d[source[i] - 'a'][target[i] - 'a'] == INF) {
                return -1;
            }
            result += d[source[i] - 'a'][target[i] - 'a'];
        }
        return result;
    }
};