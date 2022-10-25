#include <iostream>
#include <cstdio>

int main() {
    int number, time;
    double salary;
    
    scanf("%d%d%lf", &number, &time, &salary);
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf", number, (salary * time));
    
    return 0;
}