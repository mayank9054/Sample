#include<iostream>
using namespace std;

int main(){

    int a, b, value;
    cout << "Enter two number";
    cin >> a;
    cin >> b;
    cout<<" 1.Addition \n 2.Subtraction \n 3.multiplication \n 4.division \n";
    cout << "Enter the value";

    cin >> value;

    switch (value){
       case 1 :
           cout << "additon :" << a + b;
           break;
       case 2:
            cout<<"Minus : "<< a - b;
            break;

        default:
            cout << "Invalid Choice";
            break;
    }
}
