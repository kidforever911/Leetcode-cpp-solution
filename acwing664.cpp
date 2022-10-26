#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if(a + b > c && abs(a - b) < c) {
        printf("Perimetro = %.1lf", (a + b + c));
    } else {
        printf("Area = %.1lf", ((a + b) * c) / 2);
    }
    
    return 0;
}