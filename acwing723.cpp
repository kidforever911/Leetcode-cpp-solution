#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int row, col;
    
    scanf("%d%d", &row, &col);
    
    for(int i = 1; i <= row * col; i ++) {
        if(i % col == 0) {
            printf("PUM\n");
        } else {
            printf("%d ", i);
        }
    }
    
    return 0;
}