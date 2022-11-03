class Solution {
public:
    int strToInt(string str) {
        long long result = 0LL;
        int len = str.size();
        int isMinus = 1;
        int index = 0;
        while(index < len && str[index] == ' ') index ++;
        if(index < len) {
            if(str[index] == '-') {
                isMinus = -1;
                index ++;
            } else if(str[index] == '+') {
                index ++;
            }
        }
        while(index < len && str[index] >= '0' && str[index] <= '9') {
            result = result * 10 + (str[index] - '0');
            if(result > 1e11) break;
            index ++;
        }
        result = isMinus * result;
        if(result > INT_MAX) {
            result = INT_MAX;
        } else if(result < INT_MIN) {
            result = INT_MIN;
        }
        
        return result;
    }
};