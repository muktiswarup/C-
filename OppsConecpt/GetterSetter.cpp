/* #include<iostream>
using namespace std ;
class Mukti {
    private:
    int abc ;
    char ch;
    public:
    int getAbc(){
        return abc;
    }
    char getch(){
        return ch;
    }
    void setAbc(int a){
        abc=a ;
    }
    void setch(char c){
        ch= c;
    }
};
int main (){

    Mukti m1 ;
    m1.setAbc(15);
    cout << m1.getAbc() << endl;
} */

#include<iostream>
using namespace std ;
class Mukti{
    private:
    int number;
    char ch ;
    public:
    
    int getNumber(){
        return number ;
    }
    char getCharacter(){
        return ch;
    }
    void setNumber (int no){
        number= no;
    }
    void setCharacter(char c ){

        ch=c;
    }
};
int main (){
    //Staticly created an object 
    Mukti m1;
    m1.setNumber(30);
    cout << m1.getNumber() << endl;
    m1.setCharacter('C');
    cout << m1.getCharacter() << endl;
    cout << sizeof(m1) << endl;
   /*  //Dynamically create an object 
    Mukti *b=new Mukti;
    b->setCharacter('G');
    cout <<b->getCharacter() << endl;
    delete b; */

    Mukti *b = new Mukti;
    b->setNumber(98);
    cout << "Dynamically " << b->getNumber()<< endl;
    delete b ;
    cout << "Succefully deletwed manually "<< endl;
}