#include <bits/stdc++.h>
using namespace std;

int main() {
    int tampung[101];
    int cnt = 1;
    while (scanf("%d", &tampung[cnt]) != EOF) {
        cnt += 1;
    }
    for (int i = 0; i < (cnt-1); i++) {
        printf("%d \n", tampung[cnt-(1 + i)]);
    }
}