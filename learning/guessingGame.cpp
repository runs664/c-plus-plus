#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = (rand() % 1000)+ 1;
    int guess = 0;
    do {
        cout << "Guess a number between 1 and 1000! ";
        cin >> guess;

        if(guess > number) {cout << "Too high!\n" << endl;}
        else if(guess < number) {cout << "Too low!\n" << endl;}
        else {
            cout << "That's right!\n" << endl;
            exit(0);
        }
    } while(number != guess);
    return 0;
}