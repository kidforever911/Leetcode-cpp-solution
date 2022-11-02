#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int f[n + 1];
    memset(f, 0, sizeof f);
    f[0] = f[1] = 1;
    for(int i = 2; i <= n; i ++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("%d", f[n]);
    
    return 0;
}