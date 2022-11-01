#include <iostream>
#include <string>

using namespace std;

int main() {
    double k;
    string a, b;
    double count = 0;
    cin >> k >> a >> b;
    
    for(int i = 0; i < a.size(); i ++) {
        if(a[i] == b[i]) {
            count ++;
        }
    }
    if((count / a.size()) >= k) {
        printf("yes");
    } else {
        printf("no");
    }
    
    return 0;
}