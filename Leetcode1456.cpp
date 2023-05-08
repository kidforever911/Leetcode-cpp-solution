class Solution {
public:
    int maxVowels(string s, int k) {
        int result = 0, vowel = 0;
        for(int slow = 0, fast = 0; fast < s.size(); fast ++) {
            if(s[fast] == 'a' || s[fast] == 'e' || s[fast] == 'i' || s[fast] == 'o' || s[fast] == 'u') {
                vowel ++;
            }
            if(fast - slow >= k) {
                if(s[slow] == 'a' || s[slow] == 'e' || s[slow] == 'i' || s[slow] == 'o' || s[slow] == 'u') {
                    vowel --;
                }
                slow ++;
            }
            result = max(result, vowel);
        }
        return result;
    }
};