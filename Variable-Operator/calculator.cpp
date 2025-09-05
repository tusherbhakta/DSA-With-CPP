#include<iostream>
using namespace std;

int main(){
    int a, b;
    char op;
    cout<<"Enter two numbers: ";
    cin>> a >> b;
    cout<<"Enter the operator (+, -, *, /, %): ";
    cin>> op;

    switch(op){
        case '+':
            cout<<a<< "+" <<b<< "="<< a + b << endl;
            break;
        case '-':
            cout<<"a - b = "<< a - b << endl;
            break;
        case '*':
            cout<<"a * b = "<< a * b << endl;
            break;
        case '/':
            cout<<"a / b = "<< a / b << endl;
            break;
        case '%':
            cout<<"a % b = "<< a % b << endl;
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }

    return 0;
}