#include <iostream>
using namespace std;
int main() {
   char ch;
 cout<<"Input a character"<<endl;
 cin>>ch;
 if(isdigit(ch)){
    cout<<"The Character entered is a number";
 }
 else if(islower(ch)){
    cout<<"The character is lower case"<<endl;
 }
 else{
    cout<<"The character is upper case" << endl;
 }

    return 0;
}