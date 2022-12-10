class Solution {
public:
    unordered_map<string, string> record;
    string s = "0123456789abcdefghijklmnopqrstuvwxzyABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string random_str(int k) {
        string result;
        while(k --) {
            result += s[rand() % 62];
        }
        return result;
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        while(true) {
            string shortUrl = random_str(6);
            if(!record.count(shortUrl)) {
                record[shortUrl] = longUrl;
                return "http://tinyurl.com/" + shortUrl;
            }
        }
        return "";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return record[shortUrl.substr(19)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));