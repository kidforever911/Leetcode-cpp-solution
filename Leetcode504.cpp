class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string result;
        bool is_minus = num < 0;
        num = abs(num);

        while(num) {
            result = to_string(num % 7) + result;
            num /= 7;
        }
        if(is_minus) result = '-' + result;
        return result;
    }
};