#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number for prime no check: "<<endl;
    cin>>n;
    bool isprime=false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=true;
            break;
        }
       
    }
    if(isprime==true){
        cout<< "Not a prime no."<<endl;
    }
    else{
        cout<<"is a prime no.";
    }
}