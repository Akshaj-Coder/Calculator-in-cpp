#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

float num1, num2;
char op;
float answer;





int main() {

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    cout << "Enter an operator: ";
    cin >> op;
  

    if (op == '+') {
        cout <<"Your sum is:" << num1 + num2;
    }

     if (op == '-') {
        cout <<"The diffrence of the 2 numbers is: " << num1 - num2;
    }

    if (op == '*') {
        cout << "Your Product is" << num1 * num2;
    }

     if (op == '/') {
        cout << "Your quotient is: "<< num1 / num2;
    }

    else {
        cout << "Error! please enter a valid input";
    }




    

    while (1 < 21)
    {
        Sleep(20);
    }

    return 0;
}


