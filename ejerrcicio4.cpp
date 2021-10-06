#include<iostream>
using namespace std;
main(){
    double a, b, c, d, e, f, result;
    cout << " \n Enter the values, please ";
    cout << " \n Enter the value  A, please ";
    cin >>  a;
    cout << " Enter the values B, please ";
    cin >>  b;
    cout << " Enter the values C, please ";
    cin >>  c;
    cout << " Enter the values D, please ";
    cin >>  d;
    cout << " Enter the values E, please ";
    cin >>  e;
    cout << " Enter the values F, please ";
    cin >>  f;
    result = a + (b / c) / d + (e / f);
    cout << " The result is : " << result;

    return 0;

}