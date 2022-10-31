#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double M[12][12];
    int L;
    char S;
    
    cin >> L >> S;
    for(int i = 0; i < 12; i ++) {
        for(int j = 0; j < 12; j ++) {
            scanf("%lf", &M[i][j]);
        }
    }
    double sum = 0.0;
    for(int j = 0; j < 12; j ++) {
        sum += M[L][j];
    }
    if(S == 'S') {
        printf("%.1lf", sum);
    } else {
        printf("%.1lf", sum / 12);
    }
    
    return 0;
}