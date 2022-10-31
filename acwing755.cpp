#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    while(true) {
        scanf("%d", &n);
        if(n <= 0) break;
        
        long long arr[n][n];
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                arr[i][j] = pow(2, i + j);
            }
        }
        
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                printf("%lld ", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}