class Solution {
public:
    string validIPAddress(string ip) {
        if(ip.find('.') != -1 && ip.find(':') != -1) return "Neither";
        else if(ip.find('.') != -1) return check_ipv4(ip);
        else if(ip.find(':') != -1) return check_ipv6(ip);
        return "Neither";
    }

    string check_ipv4(string ip) {
        vector<string> str = split(ip + '.', '.');
        if(str.size() != 4) return "Neither";
        for(auto& s : str) {
            if(s.empty() || s.size() > 3) return "Neither";
            if(s.size() > 1 && s[0] == '0') return "Neither";
            for(auto& c : s) {
                if(c < '0' || c > '9') return "Neither";
            }
            int t = stoi(s);
            if(t > 255) return "Neither";
        }
        return "IPv4";
    }

    string check_ipv6(string ip) {
        vector<string> str = split(ip + ':', ':');
        if(str.size() != 8) return "Neither";
        for(auto& s : str) {
            if(s.empty() || s.size() > 4) return "Neither";
            for(auto& c : s) {
                if(!check(c)) return "Neither";
            }
        }
        return "IPv6";
    }

    bool check(char c) {
        if(c >= '0' && c <= '9') return true;
        if(c >= 'a' && c <= 'f') return true;
        if(c >= 'A' && c <= 'F') return true;
        return false;
    }

    vector<string> split(string s, char t) {
        vector<string> result;
        for(int i = 0; i < s.size(); i ++) {
            int j = i;
            string temp;
            while(j < s.size() && s[j] != t) temp += s[j ++];
            i = j;
            result.push_back(temp);
        }
        return result;
    }
};