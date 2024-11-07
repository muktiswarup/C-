#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter thhe second number:" << endl;
    cin>>b;
    char op;
    cout << "Enter an operation from  +,-,*,/ " << endl;
    cin>> op;
    switch(op){
        case '+' :
            cout<< (a+b) << endl;
            break;
        case '-':
            cout << (a-b) << endl;
            break;
        case '*':
            cout << (a*b) << endl;
            break;
        case '/':
        cout << (a/b) << endl;
        break;
    }
}