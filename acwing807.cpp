#include <iostream>

using namespace std;

int sum(int l, int r) {
    int result = 0;
    for(int i = l; i <= r; i ++) {
        result += i;
    }
    return result;
}

int main() {
    int l, r;
    scanf("%d%d", &l, &r);
    printf("%d", sum(l, r));
    return 0;
}