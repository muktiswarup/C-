#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int * p;
    p = & i;
    cout << "Address of the variable i is " << p << endl;
    cout << "Address of the pointer p is " << & p;

     int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * p1, * p2;
    char * p3;
    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue
    * p1 = 10; // value pointed to by p1 = 10
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2; // p1 = p2 (value of pointer is copied)
    * p1 = 20; // value pointed to by p1 = 20
    * p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;



    int *p; //Contains garbage value
    int *p = NULL; //NULL is constant with vaue 0
    int *q = 0; // Same as above


     // Null Pointer 
    int * ptr = NULL;
    cout << "The value of ptr is " << ptr;



   /*   //Double pointer 
   We can create a pointer to a pointer that in turn may point to data or another pointer. The first pointer is used to store the address of the variable. And the second pointer is used to store the address of the first pointer. That is why they are also known as double pointers. */

    int a = 10;
    int *p = &a; 
    int **q = &p;
    return 0;
    
}