#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    
    scanf("%d", &x);
    
    if(x == 61) {
        printf("Brasilia");
    } else if(x == 71) {
        printf("Salvador");
    } else if(x == 11) {
        printf("Sao Paulo");
    } else if(x == 21) {
        printf("Rio de Janeiro");
    } else if(x == 32) {
        printf("Juiz de Fora");
    } else if(x == 19) {
        printf("Campinas");
    } else if(x == 27) {
        printf("Vitoria");
    } else if(x == 31) {
        printf("Belo Horizonte");
    } else {
        printf("DDD nao cadastrado");
    }
    
    return 0;
}