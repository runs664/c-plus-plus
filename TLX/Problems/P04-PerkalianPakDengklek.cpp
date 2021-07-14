#include <cstdio>
#include <vector>

int main() {
    std::vector<int> tampung;
    std::vector<int> tampung2;
    int a, b;
    int hasil = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    while (a > 0) {
        int digit = a % 10;
        a /= 10;
        tampung.push_back(digit);
    }

    while (b > 0) {
        int digit = b % 10;
        b /= 10;
        tampung2.push_back(digit);
    }
    for (int x : tampung) {
        for (int y : tampung2) {
            hasil += x * y;
        }
    }
    printf("%d", hasil);
}