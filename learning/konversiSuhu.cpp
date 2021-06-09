#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
    {
        // inisialisasi parameter
        char dari;
        char ke;
        float suhu;
        cout << "Masukkan parameter sebelum, setelah, dan besar suhu: ";
        cout << "(Contoh: C F 100) " << endl;
        cin >> dari >> ke >> suhu;
        // inisialisasi variabel
        float TitikBekuA;
        float TitikDidihA;
        float TitikBekuB;
        float TitikDidihB;
        switch(dari) {
            case 'C':
                TitikBekuA = 0;
                TitikDidihA = 100;
                break;
            case 'R':
                TitikBekuA = 0;
                TitikDidihA = 80;
                break;
            case 'F':
                TitikBekuA = 32;
                TitikDidihA = 212;
                break;
            default:
                TitikBekuA = 273;
                TitikDidihA = 373;
        }
        switch(ke) {
            case 'C':
                TitikBekuB = 0;
                TitikDidihB = 100;
                break;
            case 'R':
                TitikBekuB = 0;
                TitikDidihB = 80;
                break;
            case 'F':
                TitikBekuB = 32;
                TitikDidihB = 212;
                break;
            default:
                TitikBekuB = 273;
                TitikDidihB = 373;
        }
        // rumus konversi universal
        float hasil = (TitikDidihB - TitikBekuB) * (suhu - TitikBekuA) / (TitikDidihA - TitikBekuA) + TitikBekuB;
        // printf("Rumus = (%f - %f) / (%f - %f) * (%f - %f) + %f\n", TitikDidihB, TitikBekuB, TitikDidihA, TitikBekuA, suhu, TitikBekuA, TitikBekuB);
        // print hasil perhitungan
        cout << "Hasil konversi adalah: ";
        cout << hasil << " derajat " << ke << endl;
        // mempause konsol
        cout << "Press Enter to continue..." << endl;
        cin.ignore(10, '\n');
        cin.get();
        return 0;
    }