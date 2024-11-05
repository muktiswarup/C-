//check either the number is power of two or not 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout <<"Enter a number:" <<endl;
    cin>>n;
    bool ispowtwo=false;
    for(int i=0;i<=30;i++){
        int ans=1<<i;  // pow(2,i)
        if(ans==n){
            ispowtwo=true;
            break;
        }
    }
    if(ispowtwo){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}