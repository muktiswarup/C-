#include<iostream>
using namespace std ;
class Mukti {
    public:
    int number ;
    Mukti(int number){
        //number = number ; 
        this->number = number ;
    }
};
int main(){
    Mukti m(56);
    cout<< m.number<< endl;
}


//When you write number = number, the compiler cannot distinguish between the member variable number and the parameter number. Therefore, it assigns the parameter number to itself, leaving the member variable uninitialized, which results in an undefined value.

// Using this->number = number explicitly tells the compiler that you are assigning the value of the parameter number to the member variable number of the class. The this pointer is a special pointer available within a class's member functions, pointing to the object for which the member function is called.