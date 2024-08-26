#include <iostream>
using namespace std;

int main()
{
    int n, i, row, spaces, no;
    cin >> n;
    row=1;
    while (row <= n)
    {
        spaces = 1;
        while (spaces <= n - row)
        {
            cout << " ";
            spaces++;
        }
        no = row;
        i = 1;
        while (i <= row)
        {
            cout << no;
            no++;
            i++;
        }
        no = 2 * row - 2;
        i = 1;
        while (i <= row - 1)
        {
            cout << no;
            no--;
            i++;
        }
        cout << endl;
        row++;
    }
    return 0;
}