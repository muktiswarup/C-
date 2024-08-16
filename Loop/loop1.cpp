/* #include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number:"<< endl;
    cin>> n;
    int i=1;
    while(i<=9){
        cout<< i << " ";
       i= i+1;
    }

} */


// W.A.P. to add all the nth element;
/* #include <iostream>
using namespace std;
int main(){
    int n;
    cout<< " enter a number"<< endl;
    cin>> n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<< sum;
} */

// wap to print the prime number..
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number:"<< endl;
    cin>> n;
    int i= 2;
    while(i<n){
        if(n%i==0){
            cout<< "not prime" << i << endl;
        }
        else{
            cout << "prime" << i << endl;
        }

        i=i+1;
    }
} */

// wap to add all the even number..
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout  <<"Enter a number" << endl;
    cin >> n;
    int sum=0;
    int i=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<< " The sum of the even number is : " << sum << endl;


} */

#include<iostream>
using namespace std;
int main(){
int n;
cout << " enter a no." <<endl;
cin>> n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<< "not a prime no." << i<< endl;
    }
    else{
          cout<< "prime no."<< i <<endl;
    }
    i=i+1;
}
}
