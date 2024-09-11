 /*Qustion digit-234
 product=2*3*4
 sum=2+3+4
 result=product-sum */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        product=digit*product;
        sum=digit+sum;
        n=n/10;
    }
    cout<<"The product of the of digits is:"<<product<<endl;
    cout<<"The sum of the of digits is:"<<sum<<endl;
    int result=product-sum;
    cout<<"The difference of product and sum is:"<<result<<endl;
}