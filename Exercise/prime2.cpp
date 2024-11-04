#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<" Enter a number:";
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count==0){
        cout<<"The number"<< n << "is a prime number"<<endl;
    }
    else{
        cout<<"Its not a prime number"<<endl;
    }
}