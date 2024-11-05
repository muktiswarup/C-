// Find the 1s complement of a number 
//input 5 then output 2   

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:" << endl;
    cin>>n;
    int m=n;
    int mask=0;
    while (m!=0){
        mask=(mask <<1) | 1;
        m=m>>1;
    }
    int ans = (~n)&mask;
    cout<<ans<< endl;
 
}