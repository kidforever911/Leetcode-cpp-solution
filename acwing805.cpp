#include <iostream>
#include <cstdio>

using namespace std;

int get(int a, int b) {
    if(a > b) return a;
    else return b;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", get(a, b));
    
    return 0;
}