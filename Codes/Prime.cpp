#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=2;
    while (i<=sqrt(n)) {
        if(n%i==0){
            cout << n << "is composite";
            return 0;
        }
    i++;
    }
    cout << n << " is a prime number";

    return 0;
}