/* 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no." << " " << endl;
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout<< ch << " ";
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
} */

/* #include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number : ";
    cin>> n ;
    int i=1;
    while(i<=n){
        int j= 1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<< endl;
        i=i+1;
    }
} */


/* Enter a number : 6
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin>> n ;
    int i =1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< count << ' ';
            count= count+1;
            j=j+1;
        }
        cout << endl;
        i= i+1;
    }
} */

/* Enter a number : 5
1
23
345
4567
56789
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
} */
/* Enter the number: 5
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i << " ";
             j=j+1;
        }
        cout << endl;
        i=i+1;
    }
} */

/*  Enter the number: 5
1
21
321
4321
54321
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter the number: ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
            cout<< value;
            value= value-1;
            j=j+1;
        }
        cout << endl ;
        i=i+1;
    }
} */

/*  Enter a number : 5
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter a number : ";
    cin>> n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch= 'A'+i-1;
        while(j<=n){
            cout<<ch;
            j=j+1;

        }
        cout << endl;
        i=i+1;
    }
} */
