#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const double pi = 3.14159;

int main() {
    int r;
    
    scanf("%d", &r);
    
    printf("VOLUME = %.3f", ((4 / 3.0) * pi * pow(r, 3)));
    
    return 0;
}