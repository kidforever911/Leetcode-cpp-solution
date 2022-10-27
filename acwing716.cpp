#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int max, x, index;
    
    for(int i = 1; i <= 100; i ++) {
        scanf("%d", &x);
        if(x > max) {
            max = x;
            index = i;
        }
    }
    
    printf("%d\n%d", max, index);
}