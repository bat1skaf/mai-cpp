#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const unsigned int arr1 = 3;
    const unsigned int arr2 = 5;
    const unsigned int arr3 = 2;
    int ary[arr1][arr2][arr3];

    for (int i = 0; i < arr1; i++) {
        for (int j = 0; j < arr2; j++) {
            for (int k = 0; k < arr3; k++) {
                ary[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                cout << setw(4) << ary[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
