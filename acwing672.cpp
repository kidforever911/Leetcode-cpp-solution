#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x;
    
    scanf("%lf", &x);
    
    if(x >= 0 && x <= 2000) {
        printf("Isento");
    } else if(x >= 2000.01 && x <= 3000) {
        printf("R$ %.2lf", (x - 2000) * 0.08);
    } else if(x >= 3000.01 && x <= 4500) {
        printf("R$ %.2lf", 1000 * 0.08 + (x - 3000) * 0.18);
    } else {
        printf("R$ %.2lf", 1000 * 0.08 + 1500 * 0.18 + (x - 4500) * 0.28);
    }
    
    return 0;
}