#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x, n;
    
    scanf("%d", &x);
    scanf("%d", &n);
    
    while(n <= 0) {
        scanf("%d", &n);
    }
    
    int sum;
    for(int i = x; i < x + n; i ++) {
        sum += i;
    }
    
    printf("%d", sum);
    
    return 0;
}