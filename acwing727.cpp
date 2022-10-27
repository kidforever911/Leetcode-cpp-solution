#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            if(abs(i - n / 2) + abs(j - n / 2) <= n / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}