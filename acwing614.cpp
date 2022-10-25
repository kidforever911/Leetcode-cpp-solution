#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    int x = (a + b + abs(a - b)) / 2;
    int max = (x + c + abs(x - c)) / 2;
    
    printf("%d eh o maior", max);
    
    return 0;
}