#include <iostream>

using namespace std;

void copy(int a[], int b[], int size) {
    for(int i = 0; i < size; i ++) {
        b[i] = a[i];
    }
}

int main() {
    int n, m, size;
    scanf("%d%d%d", &n, &m, &size);
    int a[n], b[m];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i ++) {
        scanf("%d", &b[i]);
    }
    copy(a, b, size);
    for(int i = 0; i < m; i ++) {
        printf("%d ", b[i]);
    }
    
    return 0;
}