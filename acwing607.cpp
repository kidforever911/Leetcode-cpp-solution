#include <iostream>
#include <cstdio>

int main() {
    double a, b, c;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    printf("MEDIA = %.1lf", (a * 2 + b * 3 + c * 5) / 10);
    
    return 0;
}