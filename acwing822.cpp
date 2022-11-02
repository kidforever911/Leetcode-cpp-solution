#include <iostream>

using namespace std;

const int N = 20;
int n, m;
int f[N][N];

void dp(int f[][N]) {
    f[0][0] = 1;
    for(int i = 0; i <= n; i ++) {
        for(int j = 0; j <= m; j ++) {
            if(i == 0 && j == 0) continue;
            if(i > 0) f[i][j] += f[i - 1][j];
            if(j > 0) f[i][j] += f[i][j - 1];
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    dp(f);
    printf("%d", f[n][m]);
    
    return 0;
}