#include<iostream>
using namespace std;
main(){
    float practica, teorica, participacion;

    cout << "\n Introduzca nota practica ";
    cin >> practica;
    cout << "\n Introduzca nota teorica ";
    cin >> teorica;
    cout << "\n Introduzca nota de participacion ";
    cin >> participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.1;

    double notaFinal = practica + teorica + participacion;

    cout << "\n La nota Final el : " << notaFinal;

    return 0;

}