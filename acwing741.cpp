#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    long long f[61];
    f[0] = 0, f[1] = 1;
    for(int i = 2; i < 61; i ++) f[i] = f[i - 1] + f[i - 2];
    
    int n, i;
    
    scanf("%d", &n);
    
    while(n -- > 0) {
        scanf("%d", &i);
        printf("Fib(%d) = %lld\n", i, f[i]);
    }
    
    return 0;
}