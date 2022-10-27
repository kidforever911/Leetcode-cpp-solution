#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int total, frogs = 0, rats = 0, coneys = 0, n, count;
    char type;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        scanf("%d %c", &count, &type);
        
        if(type == 'C') {
            coneys += count;
        } else if(type == 'R') {
            rats += count;
        } else {
            frogs += count;
        }
    }
    
    total = frogs + coneys + rats;
    
    printf("Total: %d animals\n", total);
    printf("Total coneys: %d\n", coneys);
    printf("Total rats: %d\n", rats);
    printf("Total frogs: %d\n", frogs);
    printf("Percentage of coneys: %.2lf %\n", (double)coneys / total * 100);
    printf("Percentage of rats: %.2lf %\n", (double)rats / total * 100);
    printf("Percentage of frogs: %.2lf %\n", (double)frogs / total * 100);
    
    return 0;
}