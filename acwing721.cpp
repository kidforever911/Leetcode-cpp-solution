#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    while(true) {
        scanf("%d", &x);
        if(!x) break;
        
        for(int i = 1; i <= x; i ++) {
            printf("%d ", i);
        }
        
        printf("\n");
    }
    
    return 0;
}