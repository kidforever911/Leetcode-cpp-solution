#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if(a < b) swap(a, b);
    if(a < c) swap(a, c);
    if(b < c) swap(b, c);
    
    if(a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(a, 2) > (pow(b, 2) + pow(c, 2))) {
            printf("TRIANGULO OBTUSANGULO\n");
        } 
        if(pow(a, 2) < (pow(b, 2) + pow(c, 2))) {
            printf("TRIANGULO ACUTANGULO\n");
        } 
        if(a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if((a == b && a != c) || (a == c && b != c) || (b == c && a != c)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    
    return 0;
}
