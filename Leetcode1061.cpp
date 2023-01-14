class Solution {
public:
    int p[26];

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for(int i = 0; i < 26; i ++) {
            p[i] = i;
        }
        for(int i = 0; i < s1.size(); i ++) {
            int f1 = find(s1[i] - 'a');
            int f2 = find(s2[i] - 'a');
            if(f1 != f2) {
                p[max(f1, f2)] = min(f1, f2);
            }
        }
        for(int i = 0; i < baseStr.size(); i ++) {
            baseStr[i] = find(baseStr[i] - 'a') + 'a';
        }
        return baseStr;
    }

    int find(int x) {
        if(p[x] != x) p[x] = find(p[x]);
        return p[x];
    }
};