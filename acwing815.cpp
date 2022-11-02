#include <iostream>

using namespace std;

void print(char str[]) {
    for(int i = 0; str[i]; i ++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[110];
    cin.getline(str, 120);
    print(str);
    return 0;
}