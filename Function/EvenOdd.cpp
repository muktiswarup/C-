#include<iostream>
using namespace std;

int EvenOdd(int n){
    if(n & 1){
        return 0;
    }
    return 1;
}
int main (){
    int n ;
    cout << "Enter a number" << endl;
    cin >> n;
    if(EvenOdd(n)){
        cout << "even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}