#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int distance;
    double cost;
    
    scanf("%d%lf", &distance, &cost);
    
    printf("%.3lf km/l", (distance / cost));
    
    return 0;
}