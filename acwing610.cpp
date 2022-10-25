#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string name;
    double x, y;
    cin >> name >> x >> y;
    
    printf("TOTAL = R$ %.2f", (x + 0.15 * y));
    
    return 0;
}