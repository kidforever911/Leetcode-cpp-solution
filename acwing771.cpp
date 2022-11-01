#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while(n -- > 0) {
        cin >> s;
        int count = 0;
        int index = 0;
        for(int i = 0, j = 0; j < s.size(); j ++) {
            if(s[j] != s[i]) {
                i = j;
            }
            if(count < j - i + 1) {
                count = j - i + 1;
                index = i;
            }
        }
        cout << s[index] << ' ' << count << endl;
    }

    return 0;
}