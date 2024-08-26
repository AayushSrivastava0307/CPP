#include <iostream>
using namespace std;

int main()
{
    int n,no=1;
    cin >> n;
    int row=1;
    while(row<=n){
        int i=1;
        while(i<=row){
            cout << no << " " <<"*";
            no++;
            i++;
        }
    cout << '\n';
    row++;
    
    }
    return 0;
}
// printf("%d ",no)
