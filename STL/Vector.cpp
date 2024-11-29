#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>v;
    cout << "Capacity of the vector is " << v.capacity() << endl;
    v.push_back(5);
    v.push_back(6);
    cout << "Capacity of the vector is " << v.capacity() << endl;
    v.push_back(7);
    cout << "Capacity of the vector is " << v.capacity() << endl;
    cout << "size of the array is " << v.size() << endl;
    for (int i:v){
        cout << i << endl;
    }
    cout << "foront of the v is" << v.front() << endl;
    cout << "back of the v is " << v.back() << endl;
    cout << "Element at index number 2 is  "<<v.at(2) << endl;

    v.pop_back();
    for (int i:v){
        cout << i << endl;
    }
    cout << v.size () << endl;
    v.clear();
    cout << v.size () << endl;

    vector<int> a(5,6);
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;

    vector<int> b(a);
    for(int i:b){
        cout << i << " ";
    }
}