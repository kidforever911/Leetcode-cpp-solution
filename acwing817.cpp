#include <iostream>
#include <cstring>

using namespace std;

const int N = 1010;
int count[N];
int a[N];

int get_unique_count(int a[], int n) {
    int result = n;
    for(int i = 0; i < n; i ++) {
        count[a[i]] ++;
        if(count[a[i]] > 1) {
            result --;
        }
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    printf("%d", get_unique_count(a, n));
    
    return 0;
}