#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double M[12][12];
    char S;
    
    cin >> S;
    
    for(int i = 0; i < 12; i ++) {
        for(int j = 0; j < 12; j ++) {
            scanf("%lf", &M[i][j]);
        }
    }
    double sum = 0.0;
    int count = 0;
    for(int i = 0; i < 12; i ++) {
        for(int j = max(i + 1, 12 - i); j < 12; j ++) {
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