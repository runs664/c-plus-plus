#include <cstdio>
using namespace std;

int main () {
    int n;
    scanf("%d", &n);
    int foo[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i <= 9; i++) {
        if (n >= foo[i]) {
            printf("%d %d\n", foo[i], n / foo[i]);
            n %= foo[i];
        }
    }
    return 0;
}