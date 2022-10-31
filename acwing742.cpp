#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    
    scanf("%d", &n);
    
    int arr[n];
    int min;
    int index = 0;
    
    for(int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    
    for(int i = 0; i < n; i ++) {
        if(min > arr[i]) {
            min = arr[i];
            index = i;
        }
    }
    
    printf("Minimum value: %d\n", min);
    printf("Position: %d\n", index);
    
    return 0;
}