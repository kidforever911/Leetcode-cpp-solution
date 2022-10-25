#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n1, count1;
    double price1;
    int n2, count2;
    double price2;
    
    scanf("%d%d%lf", &n1, &count1, &price1);
    scanf("%d%d%lf", &n2, &count2, &price2);
    
    printf("VALOR A PAGAR: R$ %.2lf", (count1 * price1 + count2 * price2));

    return 0;
}