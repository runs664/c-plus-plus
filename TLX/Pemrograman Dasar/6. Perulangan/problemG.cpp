#include <stdio.h>

int main() {
    int a, b, jml[100], max, min;
    scanf("%d", &a);

    for (b = 1; b <= a; b++){
        scanf("%d", &jml[b]);
    }
    max = jml[1];
    min = jml[1];

    for (b = 1; b <= a; b++){
        if (jml[b] >= max) {max = jml[b];}
        else if (jml[b] < min) {min = jml[b];}
    }
    printf("%d %d\n", max, min);
}