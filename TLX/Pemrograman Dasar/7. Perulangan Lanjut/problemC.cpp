#include <cstdio>

int main() {
    int pola, temp = 0;
    scanf("%d", &pola);
    for (int i = 0; i < pola; i++) {
        for (int j = 0; j < pola; j++) {
            if (j-1 < i) {
                printf("%d", temp);
                temp < 9 ? temp += 1 : temp = 0;
            }
        }
        printf("\n");
    }
}