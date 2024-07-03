#include <iostream>
using namespace std;

void calculate(int num1, int num2, char operation) {
    switch (operation) {
        case '+': 
        cout<<num1+num2<<endl;
        break;
        case '-': 
        cout<<num1-num2<<endl;
        break;
        case '*': 
        cout<<num1*num2<<endl;
        break;
        case '/': 
        cout<<float(num1/num2)<<endl;
        break;
    }
}

int main() {
        int num1, num2;
        char operation;
        cout<<"Enter 1st number, 2nd number and operation respectively: ";
        cin>>num1>>num2>>operation;
        calculate(num1, num2, operation);
}