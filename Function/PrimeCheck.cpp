#include<iostream>
using namespace std;

int primeCheck(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main (){
    int n;
    cout<< "Enter a number:" << endl;
    cin >> n;
    if(primeCheck(n)){
        cout << "It is a prime number" << endl;
    }else{
        cout << "It is not a prime number" << endl;
    }
    return 0;

}