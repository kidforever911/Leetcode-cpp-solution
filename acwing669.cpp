#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x;
    
    scanf("%lf", &x);
    
    if(x >= 0 && x <= 400.00) {
        printf("Novo salario: %.2lf\n", x * 1.15);
        printf("Reajuste ganho: %.2lf\n", x * 0.15);
        printf("Em percentual: %d %\n", 15);
    } else if(x >= 400.01 && x <= 800) {
        printf("Novo salario: %.2lf\n", x * 1.12);
        printf("Reajuste ganho: %.2lf\n", x * 0.12);
        printf("Em percentual: %d %\n", 12);
    } else if(x >= 800.01 && x <= 1200) {
        printf("Novo salario: %.2lf\n", x * 1.10);
        printf("Reajuste ganho: %.2lf\n", x * 0.10);
        printf("Em percentual: %d %\n", 10);
    } else if(x >= 1200.01 && x <= 2000) {
        printf("Novo salario: %.2lf\n", x * 1.07);
        printf("Reajuste ganho: %.2lf\n", x * 0.07);
        printf("Em percentual: %d %\n", 7);
    } else {
        printf("Novo salario: %.2lf\n", x * 1.04);
        printf("Reajuste ganho: %.2lf\n", x * 0.04);
        printf("Em percentual: %d %\n", 4);
    }
    
    return 0;
}