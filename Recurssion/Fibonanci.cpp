#include<iostream>
using namespace std ;
int fibonanci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonanci(n-1)+fibonanci(n-2);
}
int main (){
    int n ;
    cout << "Enter the the term " << endl;
    cin >> n ;
    cout << "The fibonanci number is " << fibonanci(n);
    return 0;
}