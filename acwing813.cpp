#include <iostream>
#include <cstdio>

using namespace std;

const int N = 110;

void print2D(int arr[][N], int row, int col) {
    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j ++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col;
    int arr[N][N];
    scanf("%d%d", &row, &col);
    for(int i = 0; i < row; i ++) {
        for(int j = 0; j < col; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }
    print2D(arr, row, col);
    
    return 0;
}