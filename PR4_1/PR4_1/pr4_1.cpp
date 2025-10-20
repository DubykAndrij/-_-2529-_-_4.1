#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, N;
    double S1 = 0, S2 = 0, S3 = 0, S4 = 0;

    cout << "k: ";
    cin >> k;
    cout << "N: ";
    cin >> N;

    int i = k;
    while (i <= N) {
        S1 += pow(i, 2) / (pow(k, 2) + pow(N, 2));
        i++;
    }

    i = k;
    if (k <= N) {
        do {
            S2 += pow(i, 2) / (pow(k, 2) + pow(N, 2));
            i++;
        } while (i <= N);
    }

    for (i = k; i <= N; i++) {
        S3 += pow(i, 2) / (pow(k, 2) + pow(N, 2));
    }

    for (i = N; i >= k; i--) {
        S4 += pow(i, 2) / (pow(k, 2) + pow(N, 2));
    }

    cout << "\nResult:";
    cout << "\nwhile:     " << S1;
    cout << "\ndo-while:  " << S2;
    cout << "\nfor (++):  " << S3;
    cout << "\nfor (--):  " << S4 << endl;

    return 0;
}
