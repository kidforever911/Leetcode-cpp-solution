#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    char S;
    cin >> S;
    
    double M[12][12];
    
    for(int i = 0; i < 12; i ++) {
        for(int j = 0; j < 12; j ++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    double sum = 0.0;
    int count = 0;
    for(int i = 1; i < 12; i ++) {
        for(int j = 0; j < min(11 - i, i); j ++) {
            sum += M[i][j];
            count ++;
        }
    }
    if(S == 'S') {
        printf("%.1lf", sum);
    } else {
        printf("%.1lf", sum / count);
    }
    
    return 0;
}