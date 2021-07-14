#include <iostream>
using namespace std;

int pencari_kotak(int n) {
    if (n == 1) {return 1;} else {return n * n + pencari_kotak(n - 1);}
}

int main() {
    int N;
    cin >> N;
    cout << pencari_kotak(N);
}