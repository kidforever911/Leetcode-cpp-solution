#include <iostream>
#include <cstdio>

using namespace std;

int fact(int n) {
    int result = 1;
    for(int i = n; i >= 1; i --) {
        result *= i;
    }
    
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    cout << fact(n) << endl;
    
    return 0;
}

