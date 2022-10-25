#include <iostream>
#include <cstdio>

using namespace std;

const double pi = 3.14159;

int main(){

    double r;
    
    scanf("%lf", &r);
    
    printf("A=%.4lf\n", (pi * r * r));
    
    return 0;
}