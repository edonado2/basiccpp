#include<iostream>
using namespace std;

int main(){

    float a, b, c, d, result = 0;
    cout << "Enter A ";
    cin >> a;
    cout << "Enter B ";
    cin >> b;
    cout << "Enter C ";
    cin >> c;
    cout << "Enter D ";
    cin >> d;
    result = (a + b) /(c + d);
    cout << " \n The result is : " << result;

    return 0;
}