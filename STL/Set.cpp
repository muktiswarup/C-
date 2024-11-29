#include<iostream>
#include<set>
using namespace std;
int main (){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for(auto i:s){
        cout << i << " " ;
    }
    cout << endl;
    set<int> :: iterator it =s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout << i << " " ;
    }

}