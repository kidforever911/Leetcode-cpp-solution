#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a, b, c, d;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    int total1 = a * 60 + b;
    int total2 = c * 60 + d;
    
    int time = (total2 - total1 + 24 * 60) % (24 * 60);
    
    time = (time) ? time : (24 * 60);
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", time / 60, time % 60);
    
    return 0;
}