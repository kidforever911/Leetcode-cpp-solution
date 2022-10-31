#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    
    scanf("%d", &n);
    
    int x[10];
    for(int i = 0; i < 10; i ++) {
        x[i] = n;
        printf("N[%d] = %d\n", i, x[i]);
        n *= 2;
    }
    
    return 0;
}