#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number ";
    cin >> number;
    switch(number){
        case 1 :
            cout << "This is the case 1 ";
            break;
        case 2:
            cout << " This is the case 2 ";
            break;
        case 3:
            cout << "This is the case 3 ";
            break;
        default:
            cout << "Number is not on the list";
            break;
        }

    return 0;
}