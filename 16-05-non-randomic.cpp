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
}
