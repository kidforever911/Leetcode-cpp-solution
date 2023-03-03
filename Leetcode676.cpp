const int N = 10010;

int son[N][26], idx;
bool is_end[N];

class MagicDictionary {
public:
    void insert(string& s) {
        int p = 0;
        for(auto& c : s) {
            int u = c - 'a';
            if(!son[p][u]) son[p][u] = ++idx;
            p = son[p][u];
        }
        is_end[p] = true;
    }

    MagicDictionary() {
        memset(son, 0, sizeof son);
        memset(is_end, 0, sizeof is_end);
        idx = 0;
    }

    void buildDict(vector<string> dictionary) {
        for(auto& s : dictionary) insert(s);
    }
    //p代表trie树中的位置，u代表当前字符位置，c表示字符差异值
    bool dfs(string& s, int p, int u, int c) {
        if(is_end[p] && u == s.size() && c == 1) return true;
        if(c > 1 || u == s.size()) return false;

        for(int i = 0; i < 26; i ++) {
            if(!son[p][i]) continue;
            if(dfs(s, son[p][i], u + 1, c + (s[u] - 'a' != i))) return true;
        }
        return false;
    }

    bool search(string searchWord) {
        return dfs(searchWord, 0, 0, 0);
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */