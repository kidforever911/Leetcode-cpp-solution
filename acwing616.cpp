#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    
    printf("%.4lf", (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))));
    
    return 0;
}