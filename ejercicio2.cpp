# include <iostream>
using namespace std;
int main(){
    int age;
    char sex[10];
    double height;
    
    cout << "Please enter your age ";
    cin >> age;
    cout << "Please enter your sex ";
    cin >> sex;
    cout << "Please enter your heigth ";
    cin >> height;

    cout<< "\n Age: " << age;
    cout << "\n Sex: " << sex;
    cout << "\n Height: " << height;

    return 0;
}