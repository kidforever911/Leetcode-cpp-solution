#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n, x, y;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        scanf("%d%d", &x, &y);
        int sum = 0;
        for(int i = min(x, y) + 1; i < max(x, y); i ++) {
            if(i % 2) {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}