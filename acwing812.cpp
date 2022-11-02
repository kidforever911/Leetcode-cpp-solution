#include <iostream>

using namespace std;

void print(int arr[], int size) {
    for(int i = 0; i < size; i ++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n, size;
    scanf("%d%d", &n, &size);
    int arr[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
    
    print(arr, size);
    
    return 0;
}