#include <cstdio>

int main() {
    int pola;
    scanf("%d", &pola);
    for (int i = 0; i < pola; i++) {
        for (int j = 0; j < pola; j++) {
            if (i+1 < pola-j) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}