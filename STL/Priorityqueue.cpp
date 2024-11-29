#include<iostream>
#include<queue>
using namespace std;
int main (){
    priority_queue<int> pq;
    pq.push(23);
    pq.push(39);
    pq.push(25);
    int n= pq.size();
    for(int i =0;i<n;i++){
        cout << pq.top() << " ";
        pq.pop();
    }



    // if you want to minimum heap 
    priority_queue<int,vector<int>,greater<int>> min; 
    min.push(90);
    min.push(50);
    min.push(70);
    min.push(60);
    int m= min.size();
    for(int i =0;i<m;i++){
        cout << min.top() << " ";
        min.pop();
    }
}