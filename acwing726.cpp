#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, x;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        scanf("%d", &x);
        bool flag = true;
        for(int i = 2; i * i <= x; i ++) {
            if(x % i == 0) {
                printf("%d is not prime\n", x);
                flag = false;
                break;
            }
        }
        if(flag) printf("%d is prime\n", x);
    }
    
    return 0;
}