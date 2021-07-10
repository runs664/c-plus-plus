#include <cstdio>

int main() {
    float a;
    int temp;
    int f;
    int c;
    scanf("%f", &a);
    temp = a;
    if (a > temp) {
        f = temp;
        c = temp + 1;
        printf("%d ", f);
        printf("%d", c);
    } else if (a < temp) {
        f = temp - 1;
        c = temp;
        printf("%d ", f);
        printf("%d", c);
    } else {
        f = temp;
        c = temp;
        printf("%d ", f);
        printf("%d", c);
    }
}