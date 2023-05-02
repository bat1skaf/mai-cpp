#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, z, y;
    cin >> n;
    cin >> z;
    cin >> y;

    vector<int> x{ n, z, y };
    const int N = x.size(), W = 3;

    cout << setw(W) << ' ';

    for (int i = 0; i < N; ++i) cout << setw(W) << x[i] << " ";

    cout << endl;
    cout << setw(W);

    for (int i = 0; i < N; ++i)
        cout << setw(W + 1);

    cout << endl;

    for (int i = 0; i < N; ++i) {
        cout << setw(W) << x[i] << " ";

        for (int j = 0; j < N; ++j)
            cout << setw(W) << x[i] * x[j] << " ";

        cout << endl;
    }
}
