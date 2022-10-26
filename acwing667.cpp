#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int start, end;
    
    scanf("%d%d", &start, &end);
    
    if(start < end) {
        printf("O JOGO DUROU %d HORA(S)", (end - start));
    } else {
        printf("O JOGO DUROU %d HORA(S)", (24 - start + end));
    }
    
    return 0;
}