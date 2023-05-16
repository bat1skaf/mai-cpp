/* #include <iostream>
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

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,m, n;
    cout<<"Enter num of rows : ";
    cin>>m;
    cout<<"Enter num of cols : ";
    cin>>n;

    int ** arr = new int * [m];
    for(i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for(j = 0; j < n; j++)
            cout<<setfill(' ')<<setw(2)<<(arr[i][j] = i + j)<<" ";
        cout<<"\n";
    }
    return 0;
} */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int row = 3, column = 4; 
    int array[row][column];      

    for(int i = 0; i < row; i++)
    {
        cout << "Введите " << i + 1 << " строку\n";

        for(int j = 0; j < column; j++)
        {
            cout << "Введите целое число: ";
            cin >> array[i][j];
        }
    }
    printArray(array, row, column);
}
