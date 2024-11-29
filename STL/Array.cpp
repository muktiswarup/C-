#include<iostream>
#include<array>
using namespace std;
int main (){
    array<int,4> a= {5,6,8,9};
    int size = a.size();
    for (int i:a){
        cout << i << " " << endl;
    }
    cout << a.at(2) << endl;
    cout << a.at(1) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    a.push_back(18)
    for (int i:a){
        cout << i << " " << endl;
    }
}