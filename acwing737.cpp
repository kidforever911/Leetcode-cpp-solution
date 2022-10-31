#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x[10];
    int n;
    for(int i = 0; i < 10; i ++) {
        scanf("%d", &n);
        if(n <= 0) {
            x[i] = 1;
        } else {
            x[i] = n;
        }
        printf("X[%d] = %d\n", i, x[i]);
    }
    
    return 0;
}