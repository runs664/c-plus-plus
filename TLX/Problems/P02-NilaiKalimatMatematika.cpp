#include <cstdio>
using namespace std;

int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '+': {
            printf("%d", a+b);
            break;
        }
        case '-': {
            printf("%d", a-b);
            break;
        }
        case '*': {
            printf("%d", a*b);
            break;
        }
        case '<': {
            if (a < b) {
                printf("benar");
            } else {
                printf("salah");
            }
            break;
        }
        case '>': {
            if (a > b) {
                printf("benar");
            } else {
                printf("salah");
            }
            break;
        }
        case '=': {
            if (a == b) {
                printf("benar");
            } else {
                printf("salah");
            }
            break;
        }
    }
}