//Find out the power of the n number and nth term using function ;
/* #include<iostream>
using namespace std;
int power (){
    int a, b;
    cout << "Enter two number"<< endl;
    cin >> a >> b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main (){
    cout <<"The nth term of the n number is "<<power()<< endl;
} */

//step 2;

#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans= ans*a;
    }
    return ans;
}
int main (){
    int a,b;
    cout << "Enter two number:" << endl;
    cin>> a>> b;
    int ans= power(a,b);
    cout << ans;
}