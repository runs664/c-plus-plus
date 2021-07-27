#include<bits/stdc++.h>
using namespace std;
int temp, N;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> N;
    string str[N];
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < N; i++) {
        temp = str[i].size();
        if (temp > 10) {
            cout << str[i][0] << temp-2 << str[i][temp-1] << "\n";
        } else {
            cout << str[i] << "\n";
        }
    }
}
    