#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    
    while(true) {
        scanf("%d", &n);
        if(n <= 0) break;
        
        int arr[n][n];
        for(int i = 0; i < n; i ++) {
            arr[i][i] = 1;
            for(int j = i + 1, k = 2; j < n; j ++, k ++) arr[i][j] = k;
            for(int j = i + 1, k = 2; j < n; j ++, k ++) arr[j][i] = k;
        }
        
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}