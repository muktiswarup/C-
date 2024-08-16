/* #include <iostream>
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
} */

// how to take an input value 

/* #include <iostream>
using namespace std;
int main() {
   int a,b;
   cin>> a >> b;
   cout<< "enter the value of a and b: " << a  << b<< endl;
} */


// wap a is positive number or -ve 
/* #include <iostream> 
using namespace std;
int main (){
   cout<< " Enter a numnber:" << endl;
   int n;
   cin>> n;
   if(n>=0){
      cout<< n << "is a positive number" << endl;
   }
   else{
      cout<< n << "is a negative number" << endl;
   }
}
 */

//output based question
#include<iostream>
using namespace std;
int main(){
   int a= 2;
   int b= a+1;
   if((a=3)==b){
      cout<< "the value of "<<  a << endl;
   }
   else{
      cout<< "the value of a+1" <<  a+1 << endl;
   }
}