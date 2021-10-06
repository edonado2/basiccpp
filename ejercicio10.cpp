#include<iostream>
#include<math.h>
                        // Calculate 2nd grade equations //
using namespace std;
int main(){
    double a, b, c, x1, x2, result;

    cout << "Enter A ";
    cin >> a;
    cout<< "Enter B ";    
    cin >> b; 
    cout << "Enter C ";
    cin >> c;
    
    if (b == 0 && c != 0){
        result = sqrt(-c / a);
        cout << "The value of x is an imaginary number (i)";
        }
    else if (b != 0 && c == 0)
    {
        x1 = 0;
        x2 = (-b / a);
        cout << "\n The first value of x is " << x1;
        cout << "\n The second value of x is " << x2;
    }

    else if (b == c && c == 0 )
    {
        x1 = 0;
        cout << "\n The value of x is " << x1;

    }else{
        int interiorRaiz = pow(b, 2) - 4 * (a * c);
        x1 = (-b + sqrt(interiorRaiz)) / (2 * a);
        x2 = (-b - sqrt(interiorRaiz)) / (2 * a);

        cout << "\n The first value of x is " << x1;
        cout << "\n The second value of x is " << x2;
    };


    
    

    return 0;
}