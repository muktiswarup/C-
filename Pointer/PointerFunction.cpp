#include<bits/stdc++.h>
using namespace std ;
void  update (int **p2){

    // p2 = p2 +1;
    // kuch change hoga ----no 

    // *p2 = *p2 +1;
    // // kuch change hoga ---- yes 

      **p2 = **p2 +1;
    // //kuch change hoga ----yes 


    
}


int main (){
    int i =5;
    int *p = &i;
    int **p2 = &p ;
    cout << "before " << p2 << endl;
    cout << "Before " << *p2 << endl;
    cout << "Before " << **p2 << endl;
    update(p2);
    cout << "After " << p2 << endl;
    cout << "After " << *p2 << endl;
    cout << "AFTER " << **p2 << endl;
    cout << i << endl;


   /*  // 5 will be print 
    cout << "It will print the 5 " << endl;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout << endl;

    cout <<"it will print the address of the i :" << endl;
    cout << endl;
    // print the adress of the 5 
    cout << & i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    cout << endl;

    cout <<"It will print the address of the p " << endl;
    //print the address of the p 
    cout << &p <<endl;
    cout << p2<<endl;
    cout << endl;
    cout <<"It will print the address of the p2 " << endl;

    // print the address of the p2 
    cout << &p2 << endl; */
}