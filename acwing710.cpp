#include <iostream>
#include <cstdio>

int main() {
    int x;
    
    scanf("%d", &x);
    
    int count = 0;
    
    while(count < 6) {
        if(x % 2) {
            count ++;
            printf("%d\n", x);
        }
        x ++;
    }
    
    return 0;
}