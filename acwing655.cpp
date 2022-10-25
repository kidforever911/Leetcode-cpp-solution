#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    
    printf("%d ano(s)\n", N / 365); N %= 365;
    printf("%d mes(es)\n", N / 30); N %= 30;
    printf("%d dia(s)\n", N / 1); N %= 1;
    
    return 0;
}