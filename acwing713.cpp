#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, x;
    int countIn = 0, countOut = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        scanf("%d", &x);
        if(x >= 10 && x <= 20) {
            countIn ++;
        } else {
            countOut ++;
        }
    }
    printf("%d in\n", countIn);
    printf("%d out\n", countOut);
    
    return 0;
}