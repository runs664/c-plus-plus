#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        if (i % 10 == 0) {
            continue;
        } else if (i == 42) {
            printf("ERROR\n");
            break;
        } else {
            printf("%d\n", i);
        }
    }
}