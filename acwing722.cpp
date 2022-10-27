#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    
    while(true) {
        scanf("%d%d", &x, &y);
        
        if(x <= 0 || y <= 0) break;
        
        int sum = 0;
        for(int i = min(x, y); i <= max(x, y); i ++) {
            printf("%d ", i);
            sum += i;
        }
        
        printf("Sum=%d\n", sum);
    }
    
    return 0;
}