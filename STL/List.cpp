#include<iostream>
#include<list>
using namespace std;
int main (){
    list<int >l;
    l.push_back(45);
    l.push_front(66);
    for (int i:l){
        cout << i << " " ;
    }
    cout << endl;
    cout << l.size() << endl;
    cout << l.front()<< endl;
    l.erase(l.begin());
     for (int i:l){
        cout << i << " " ;
    }
    l.clear();
     cout << l.size()<< endl;
}
//pop_front ,pop_back