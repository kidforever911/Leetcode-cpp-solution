#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n, x;
    
    while(true) {
        scanf("%d", &n);
        if(n <= 0) break;
        
        for(int i = 1; i <= n; i ++) {
            for(int j = 1; j <= n; j ++) {
                x = min(min(i, j), min(n - i + 1, n - j + 1));
                printf("%d ", x);
            }
            printf("\n");
        }
        
        printf("\n");
    }
    
    return 0;
}