#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int n, m;
    
    scanf("%d%d", &n, &m);
    int arr[n][m];
    memset(arr, 0, sizeof arr);
    int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    int index = 0;
    
    for(int x = 0, y = 0, k = 1; k <= n * m; k ++) {
        arr[x][y] = k;
        int newx = x + direction[index][0];
        int newy = y + direction[index][1];
        if(newx < 0 || newx >= n || newy < 0 || newy >= m || arr[newx][newy]) {
            index = (index + 1) % 4;
            newx = x + direction[index][0];
            newy = y + direction[index][1];
        }
        x = newx;
        y = newy;
    }
    
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}