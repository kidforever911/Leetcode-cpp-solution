const int N = 2510;
int son[N][26], S[N], V[N], idx;

class MapSum {
public:
    void add(string& s, int last, int value) {
        int p = 0;
        for(auto& c : s) {
            int u = c - 'a';
            if(!son[p][u]) son[p][u] = ++idx;
            p = son[p][u];
            S[p] += value - last;
        }
        V[p] = value;
    }

    int query(string& s) {
        int p = 0;
        for(auto& c : s) {
            int u = c - 'a';
            if(!son[p][u]) return 0;
            p = son[p][u];
        }
        return p;
    }

    MapSum() {
        idx = 0;
        memset(son, 0, sizeof son);
        memset(S, 0, sizeof S);
        memset(V, 0, sizeof V);
    }

    void insert(string key, int val) {
        add(key, V[query(key)], val);
    }

    int sum(string prefix) {
        return S[query(prefix)];
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */