#include <bits/stdc++.h>
using namespace std;

int algorithm1(int n, int *array) {
    int best = 0;
    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) {
            int sum = 0;
            for (int k = a; k <= b; k++) {
                sum += array[k];
                }
            best = max(best,sum);
        }
    }
    return best;
}

int algorithm2(int n, int *array) {
    int best = 0;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += array[b];
            best = max(best,sum);
        }
    }
    return best;
}

int algorithm3(int n, int *array) {
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    return best;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    time_t start, end;

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    time(&start);
    cout << "Algorithm 3: " << algorithm3(n, array) << "\n";
    time(&end);
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << "\n";
    return 0;
}