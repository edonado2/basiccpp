#include<iostream>
#include<math.h>
using namespace std;
main(){
    int number;
    int data = 5;
    cout << "Enter a number ";
    cin >> number;

    if (number == data ){
        cout << " Entered number match";
    }else{
        cout << "Entered number doesn't match ";
    }

    return 0;
}