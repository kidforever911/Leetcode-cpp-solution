#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    int x = a, y = b, z = c;
    
    if(x > y) swap(x, y);
    if(x > z) swap(x, z);
    if(y > z) swap(y, z);
    
    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d", a, b, c);
    
    return 0;
}