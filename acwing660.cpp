#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x, y;
    
    scanf("%lf%lf", &x, &y);
    
    if(x == 1) {
        printf("Total: R$ %.2lf", 4 * y);
    } else if(x == 2) {
        printf("Total: R$ %.2lf", 4.5 * y);
    } else if(x == 3) {
        printf("Total: R$ %.2lf", 5 * y);
    } else if(x == 4) {
        printf("Total: R$ %.2lf", 2 * y);
    } else if(x == 5) {
        printf("Total: R$ %.2lf", 1.5 * y);
    }
    
    return 0;
}