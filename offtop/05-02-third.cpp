#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, i, j = 1;
    cin >> n;
    for (i = 1; i <= (n * n); i++) {
        for (i = 0; i <= (n * j); (i += j)) {
            cout << i << " ";
            if (i == (n * j))
                cout << endl;
        }
        j++;
    }
}
