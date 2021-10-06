#include<iostream>
#include <math.h>
using namespace std;
int main(){

    double catA, catB, hip2; //Calculate Hipotenuse of a triangle

    cout << "\n Ingrese valor cateto A ";
    cin >> catA;
    cout << "\n Ingrese valor cateto B ";
    cin >> catB;
    hip2 = (catA + catB),pow(hip2,2);

    double hip = sqrt(hip2);

    cout << "La hipotenusa del triangilo ingresado es " << hip;

    return 0;
}