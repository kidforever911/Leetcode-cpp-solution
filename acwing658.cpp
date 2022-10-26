#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    double y = pow(b, 2) - 4 * a * c;
    
    if(y < 0 || a == 0) {
        printf("Impossivel calcular");
    } else {
        printf("R1 = %.5lf\n", (-b + sqrt(y)) / (2 * a));
        printf("R2 = %.5lf\n", (-b - sqrt(y)) / (2 * a));
    }
    
    return 0;
}