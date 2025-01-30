#include<iostream>
using namespace std ;
class Mukti {
    public:
    int health;
    char level;
    Mukti(int health,int level){
        this->health= health;
        this->level=level;
    }
    void print (){
        cout <<level << endl;
    }
};
int main (){
    Mukti m1(45,'C');
    cout << m1.health << " " << m1.level << endl;
    m1.print();

    //Dynamically created ;
    Mukti  *m2 = new Mukti(85,'l');
    cout<< m2->health << " " << m2->level << endl;
    m2->print();
    delete m2 ;
}