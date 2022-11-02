#include <iostream>

using namespace std;

int lcm(int x, int y) {
    for(int i = max(x, y); i <= x * y; i ++) {
        if(i % x == 0 && i % y == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", lcm(x, y));
    return 0;
}