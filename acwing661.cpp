#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double n1, n2, n3, n4, y;
    
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    
    double x = (2 * n1 + 3 * n2 + 4 * n3 + 1 * n4) / 10;
    
    printf("Media: %.1lf\n", x);
    
    if(x >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(x < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &y);
        printf("Nota do exame: %.1lf\n", y);
        double z = (x + y) / 2;
        if(z >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", z);
    }
    
    return 0;
}