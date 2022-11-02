#include <iostream>

using namespace std;

void sort(int arr[], int l, int r) {
    for(int i = l; i <= r; i ++) {
        for(int j = i + 1; j <= r; j ++) {
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n, l, r;
    scanf("%d%d%d", &n, &l, &r);
    int arr[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, l, r);
    for(int i = 0; i < n; i ++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}