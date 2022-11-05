#include <iostream>
#include <algorithm>

using namespace std;

struct Pair{
    int x;
    double y;
    string z;
};

int main() {
    int n;
    scanf("%d", &n);
    Pair arr[n];
    for(int i = 0; i < n; i ++) {
        cin >> arr[i].x >> arr[i].y >> arr[i].z;
    }
    sort(arr, arr + n, [](Pair a, Pair b) {return a.x < b.x;});
    for(int i = 0; i < n; i ++) {
        printf("%d %.2lf %s\n", arr[i].x, arr[i].y, arr[i].z.c_str());
    }
    return 0;
}