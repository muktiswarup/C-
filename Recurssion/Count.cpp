//print 5 to 1 using recursion
/* #include<iostream>
using namespace std ;
void print (int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    print(n-1);
}
int main (){
    int n ;
    cout << "Enter a number :" << endl;
    cin >> n;
    print (n);
} */

//print 1 to 5 using recursion 

#include<iostream>
using namespace std ;
void print(int n){
    if(n==0){
        return ;
    }
    print(n-1);
    cout << n << endl;
}
int main(){
    int n ;
    cout << "Enter a number " << endl;
    cin >> n ;
    print(n);
    return 0;
}