#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<int> arr1;
    vector<int> arr2;

    int f = 1;
    while(f != 0) {
        cin >> f;
        arr1.push_back(f);
    }
    int size = arr1.size();

    for (auto it = arr1.rbegin(); it != arr1.rend(); ++it) {
        arr2.push_back(*it);
    }
    for (int v : arr2) {
        cout << v << " ";
    }
    return 0;
}
