#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double n;
    
    for(int i = 0; i < 100; i ++) {
        scanf("%lf", &n);
        if(n <= 10) {
            printf("A[%d] = %.1lf\n", i, n);
        }
    }
    
    return 0;
}