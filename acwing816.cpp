#include <iostream>

using namespace std;

void reverse(int a[], int size) {
    for(int i = 0, j = size - 1; i < j; i ++, j --) {
        swap(a[i], a[j]);
    }
}

int main() {
    int n, size;
    scanf("%d%d", &n, &size);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    reverse(a, size);
    for(int i = 0; i < n; i ++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}