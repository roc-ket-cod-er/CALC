#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    char choice;
            do {
    double num1 = 0;
    double num2 = 0;
    char op = 'k';
    double answer = 0;
    bool basic = true;
    char temp = 'k';
    int num1Int = 0;
    int num2Int = 0;

    cout <<"=========================CALCULATOR==========================";
    cout << "\nSelect Basic or Advamced(b/a) >> " ; cin >> temp;
    if(temp=='b'){
    bool basic = true;
    cout <<"\nEnter the First Number >> " ; cin >> num1;
    cout <<"Enter Operator (+,-,*,/) >> " ; cin >> op;
    cout <<"Enter Num2 >> " ; cin >> num2;

    switch(op){
        case 'x':
            answer = (num1*num2);
            break;
        case '+':
            answer = (num1+num2);
            break;
        case '-':
            answer = (num1-num2);
            break;
        case '/':
            answer = (num1/num2);
    }

cout << "The Answer Is " ; cout << answer;
    }
    else if(temp == 'a'){
    basic = false;
int opAdvanced = 0;
cout << "Please select advanced operator, Do 1-7 based on order (%,square root, square, cube root, cube, x^y, round) >> " ; cin >> opAdvanced;

switch(opAdvanced){
        case 1:
            cout << "\nEnter Number 1 >> "; cin >> num1Int; 
            cout << "\n Enter Number 2 >> "; cin >> num2Int;
            answer = num1Int % num2Int;
            cout << "\nThe answer is " ; cout << answer;
            break;
        case 2:
            cout << "\nEnter Number >> "; cin >> num1;
            answer = sqrt(num1);
            cout << "\nThe Answer is "; cout << answer;
            break;
        case 3:
            cout <<"\nEnter Number >> "; cin >> num1;
            answer = num1*num1;
            cout << "\nThe Answer is "; cout << answer;
            break;
        case 4:
            cout << "\nEnter number >> "; cin >> num1;
            answer = cbrt(num1);
            cout << "\nThe Answer is "; cout << answer;
            break;
        case 5:
            cout <<"\nEnter Number > "; cin >> num1;
            answer = num1*num1*num1;
            cout << "\nThe Answer is "; cout << answer;
            break;
        case 6:
            cout <<"\nEnter Number 1 >> "; cin >> num1;
            cout <<"\nEnter Number 2 >> "; cin >> num2;
            answer = pow(num1,num2);
            cout << "\nThe Answer is "; cout << answer;
            break;
        case 7:
            cout <<"Enter Number >> "; cin >> num1;
            answer = round(num1);
             cout << "\nThe Answer is "; cout << answer;
             break;
    }
}
    else{
        cout << "ERROR, Please make sure you typed in only b or a or else it won't register";
    }
cout << "\nDo you want to run again? (y/n): ";
cin >> choice;
            } while (choice == 'y' || choice == 'Y');
            return 0;
}
