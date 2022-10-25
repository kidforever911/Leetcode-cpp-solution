#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N;
    
    scanf("%d", &N);
    
    printf("%d:%d:%d", N / 3600, N % 3600 / 60, N % 3600 % 60);
    
    return 0;
}