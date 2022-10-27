#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    
    scanf("%d%d", &x, &y);
    
    int sum;
    
    for(int i = min(x, y) + 1; i < max(x, y); i ++) {
        if(i % 2) {
            sum += i;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}