#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int count = 0;
    double x;
    
    for(int i = 0; i < 6; i ++) {
        scanf("%lf", &x);
        if(x > 0) {
            count ++;
        }
    }
    
    printf("%d positive numbers", count);
    
    return 0;
}