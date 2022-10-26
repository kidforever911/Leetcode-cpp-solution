#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    if(b % a == 0 || a % b == 0) {
        printf("Sao Multiplos");
    } else {
        printf("Nao sao Multiplos");
    }
    
    return 0;
}