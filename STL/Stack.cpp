#include<iostream>
#include <stack>
using namespace std;
int main (){
    stack<int>st;
    st.push(54);
    st.push(64);
    st.push(78);
   while(!st.empty()){
    cout << st.top() << " " ;
    st.pop();
   }
   cout << endl;
}