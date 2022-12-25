class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> result;
        if(paths.empty()) return result;
        unordered_map<string, vector<string>> record;
        for(auto& path : paths) {
            stringstream ssin(path);
            string p, file, name, content;
            ssin >> p;
            while(ssin >> file) {
                int x = file.find('('), y = file.find(')');
                name = file.substr(0, x), content = file.substr(x + 1, y - x - 1);
                record[content].push_back(p + '/' + name);
            }
        }
        for(auto& [k, v] : record) {
            if(v.size() > 1) {
                result.push_back(v);
            }
        }
        return result;
    }
};