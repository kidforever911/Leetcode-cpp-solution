#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int n;
    string s1, s2;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i ++) {
        cin >> s1 >> s2;
        
        if(s1 == s2) { 
            printf("Tie\n");
        } else if(s1 == "Hunter") {
            if(s2 == "Gun") {
                printf("Player1\n");
            } else {
                printf("Player2\n");
            }
        } else if(s1 == "Gun") {
            if(s2 == "Bear") {
                printf("Player1\n");
            } else {
                printf("Player2\n");
            }
        } else if(s1 == "Bear") {
            if(s2 == "Hunter") {
                printf("Player1\n");
            } else {
                printf("Player2\n");
            }
        }
    }
    
    return 0;
}