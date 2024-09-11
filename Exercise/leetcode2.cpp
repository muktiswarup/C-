/* number=4
binary of number=00000...........100
we need to calculate howmany 1 bit is there in the binary */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"The number of 1 present in the binary number "<< count << endl;
}