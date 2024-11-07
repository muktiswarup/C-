#include<iostream>
using namespace std;
int main (){
    int a;
    cout << "Enter an number:" << endl;
    cin >> a;
    int b;
    cout << "Enter the power" << endl;
    cin >> b;
        int pow=a;
    for(int i=1;i<b;i++){
        pow = pow*a;
    }
    cout << "The power of the number is " << pow<<endl;

}