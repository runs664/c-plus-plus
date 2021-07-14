#include <bits/stdc++.h>
using namespace std;

int main() {
    string masukan, keluaran;
    int length, i;
    getline(cin, masukan);
    stringstream ss(masukan);
    string word;
    while (ss >> word) {
        int flag = 0;
        length = word.size();
        for(i=0;i < length ;i++){
            if(word[i] != word[length-i-1]){
                flag = 1;
                break;
            }
        }
        if (flag == 0) {keluaran += (word + " ");}
    }
    cout << keluaran;
}