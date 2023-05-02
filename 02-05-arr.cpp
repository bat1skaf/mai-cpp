#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<int> arr;
    int f = 1;
    while(f != 0) {
        cin >> f;
        arr.push_back(f);
    }
    
    int size = arr.size();
    for (int i = 0, half = size / 2; i < half; ++i) {
        swap(arr[i], arr[size - i - 1]);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        cout << " ";
    }

    return 0;
}
