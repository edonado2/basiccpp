#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float x, y, result = 0;
    cout << "Enter X ";
    cin >> x;
    cout << "Enter Y ";
    cin >> y;
    result = (sqrt(x)) / (pow(y, 2) - 1);
    cout << " The result is: " << result;

    return 0;

}