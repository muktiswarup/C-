#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> b;
    b.push_back(5);
    b.push_back(6);
    b.push_back(7);
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    b.pop_back();
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    b.push_back(9);
    b.push_back(10);
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    b.erase(b.begin(),b.begin()+2);
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << b.empty() << endl;
    cout << b.at(1) << endl; 
    b.push_back(78);
    b.push_front(36);
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;


}
