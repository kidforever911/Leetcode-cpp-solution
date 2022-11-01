#include <iostream>
#include <string>

using namespace std;

int count[26];

int main() {
    string s;
    
    getline(cin, s);
    for(auto c : s) {
        count[c - 'a'] ++;
    }
    
    for(int i = 0; i < s.size(); i ++) {
        if(count[s[i] - 'a'] == 1) {
            printf("%c", s[i]);
            return 0;
        }
    }
    
    printf("no");
    
    return 0;
}