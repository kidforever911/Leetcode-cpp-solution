#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N[20];
    
    for(int i = 0; i < 20; i ++) {
        scanf("%d", &N[i]);
    }
    
    for(int i = 19, index = 0; i >= 0; i --) {
        printf("N[%d] = %d\n", index ++, N[i]);
    }
    
    return 0;
}