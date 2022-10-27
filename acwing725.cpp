#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, x;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        scanf("%d", &x);
        int sum = 0;
        for(int i = 1; i * i <= x; i ++) {
            if(x % i == 0) {
                if(i < x) sum += i;
                if(i != x / i && x / i < x) sum += x / i;
            }
        }
        if(sum == x) printf("%d is perfect\n", x);
        else printf("%d is not perfect\n", x);
    }
    
    return 0;
}