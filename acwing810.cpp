#include <iostream>

using namespace std;

int abs(int x) {
    if(x > 0) return x;
    else return -x;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", abs(x));
    
    return 0;
}