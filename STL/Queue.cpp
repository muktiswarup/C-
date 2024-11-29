#include<iostream>
#include<queue>
using namespace std;
int main (){
    queue<int> que;
    que.push(50);
    que.push(60);
    que.push(70);
    while(!que.empty()){
        cout << que.front()<< " " ;
        que.pop();

    }
    cout << que.size() << endl;
}