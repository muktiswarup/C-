#include<iostream>
using namespace std ;

int power(int n){
    if(n==0){
        return 1;
    }
    return 5 * power(n-1);
}
int main (){
    int n ;
    cout << "Enter no of time " << endl;
    cin >>n;
    cout << "The power " << power(n) << endl;
}