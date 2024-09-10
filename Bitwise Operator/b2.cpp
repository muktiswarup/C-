// left shift and right shift

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter first number:" <<endl;
    cin>>n;
    cout<<( n<<1 )<<endl;

} */


//Right shift 

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    int rightshift=n>>2;
    cout<<rightshift <<endl;
} */

//increment decrement

/* #include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<<++a <<endl; //6
    cout<<a++ <<endl; //6
    cout<<a++ <<endl; //7
    cout << a-- <<endl; //8
    cout << --a <<endl; //6
} */

//practice que..
/*  #include<iostream>
using namespace std;
int main(){
    int a=5;
    int  m= a++  +  a --;   //11
    cout<<m <<endl;
} */

 #include<iostream>
using namespace std;
int main(){
    int a,b=1;
    a=10;
    if(++a){
        cout<< b << endl;
    }
    else{
        cout << ++b;
    }
}
