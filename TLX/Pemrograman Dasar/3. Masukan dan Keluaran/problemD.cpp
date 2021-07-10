#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    int bebek;
    int pembagi;
    cin >> bebek;
    cin >> pembagi;
    if (pembagi != 0) {
        cout << "masing-masing " << bebek/pembagi << endl;
        cout << "bersisa " << bebek%pembagi;
    } else {
        cout << "masing-masing" << bebek << endl;
        cout << "bersisa " << pembagi;
    }
}