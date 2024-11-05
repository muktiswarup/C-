// find out the reverse of a integer if its above th e range of the integer then return 1;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: " << endl;
    cin>>n;
    int digit;
    int ans=0;
    while(n!=0){
        digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<"The reverse of the iteger is :"<<ans<<endl;
}