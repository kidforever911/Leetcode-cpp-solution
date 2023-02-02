class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1) return "";
        return str1.substr(0, gcd(str1.size(), str2.size()));
    }

    int gcd(int a, int b) {
        return b ? gcd(b, a % b) : a;
    }
};