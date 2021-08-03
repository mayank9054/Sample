#include<iostream>
using namespace std;

int main(){

    int a, b, value;
    cout << "Enter two number";
    cin >> a;
    cin >> b;
    cout << "Enter the value";
    cin >> value;

    switch (value){
       case 1 :
           cout << "additon :" << a + b;
           break;

        default:
            cout << "Invalid Choice";
            break;
    }
}