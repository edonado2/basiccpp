#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
#include <stdexcept>
#include <stdexcept>

using namespace std;
int main()
{
/*    int number;
    cout << "Enter a number "; //Introducing a value
    cin >> number;             // Reading a Value
    cout << "Entered number is " << number;  //Console output
    return 0;10

*/

//------------------Ejercicio operaciones aritmeticas------------------
double number1, number2, sumatory = 0, mult = 0, div = 0;

cout << "Please enter the first digit ";
cin >> number1;
cout << "Please enter the second digit ";
cin >> number2;
sumatory = number1 + number2;
cout << " \n The sumatory of the entered values is : " << sumatory;
mult = number1 * number2;
cout << " \n The multiplication of the entered numbers is equal to: " << mult;

div = number1 / number2;
    if (number2 == 0 )
    cout<< " \n Math error: Attempted to divide by Zero\n";
    else (cout<< " \n The result of the division is " << div);
    
}


