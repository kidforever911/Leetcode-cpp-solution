#include <iostream>

using namespace std;

const int N = 20;
int n;
bool state[N];
int nums[N];

void dfs(int index, int n) {
    if(index == n) {
        for(int i = 0; i < n; i ++) printf("%d ", nums[i]);
        printf("\n");
    } else {
        for(int i = 1; i <= n; i ++) {
            if(!state[i]) {
                nums[index] = i;
                state[i] = true;
                dfs(index + 1, n);
                state[i] =false;
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    dfs(0, n);

    return 0;
}