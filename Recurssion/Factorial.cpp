#include<iostream>
using namespace std ;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans = n * factorial(n-1);
    return ans ;
}
int main (){
    int n ;
    cout << "Enter a number : " << endl;
    cin >> n ;
    int ans = factorial(n);
    cout << "The factorial of the number is " << ans << endl;

}