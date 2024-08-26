#include <iostream>
#include<vector>
using namespace std;
int main() {

    vector<int>v(10);

    for(int i=0;i<10;i++){
        v[i]=i;
    }
    vector<int>:: iterator it=v.end(); // prints garbage as pointing ahead of vector 
    cout<<*it<<" ";
    cout<<endl;

    vector<int>:: iterator tt=v.begin(); // prints 0 ( first element)
    cout<<*tt<<" ";
    cout<<endl;

    vector<int>:: iterator t=v.end(); // prints last element 9
    t--;
    cout<<*t<<" ";
    // v.erase(&v[0]);
    v.erase(v.begin());



  return 0;
}