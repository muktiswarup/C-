#include<iostream>
using namespace std ;
class Construct{
    public:
    int num;
    // cout << "Hello world 0" << endl; it will give you error because cout outside function is not allowed  so .
    int number (){
        cout << "Kn hela hai " << endl;
        return 0;
    }
    //Default constructor 
    Construct(){
        cout << "Hi mukti" << endl;
    }
    //Parmeterize constructor 
    Construct(int  n){
        num=n;
    cout << "ParaMeterize ko call kia " << endl;
    }
};
int main (){
    cout << "Mu bhala achi" << endl;
    Construct c1;
    cout << c1.number() << endl;
    cout << "Ebekouthi acha " << endl;
    Construct c2(25);
    cout << c2.num << endl;
    // Dynamic way create the object 
    Construct *c = new Construct(78);
    cout << c->num << endl;
    delete c;

}