#include <iostream>
using namespace std;
int main (){
    int n =10;
    for (int i=0;i<n;i++){
        for (int j =0;j<n-i-1;j++){
            cout <<"0" << " ";
        }
        cout << n-i<<endl;

    }
}