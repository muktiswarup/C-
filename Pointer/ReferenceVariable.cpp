// // Same memory but differnt name 
// #include<bits/stdc++.h>
// using namespace std ;
// void update (int &n ){
//     n++;
// }

// int main (){
//     int i =5;
//     // int &j =i;
//     // cout << i << endl;
//     // cout << j << endl;
//     // i++;
//     // cout << j << endl; 
//     // j++;
//     // cout << i << endl ;
//     // update(i) ;
//     // cout << i << endl;
//     char *ch = new char ;
//     cout << ch << endl;
//     cout << *ch << endl;
//     cout << sizeof(new char) << endl;
//     cout << sizeof(new int ) << endl;
//     cout << sizeof(ch) << endl;

// }


/* #include<bits/stdc++.h>
using namespace std ;

int sum(int *arr, int n){
    int sum =0;
    for (int i =0;i<n ;i++){
        sum = sum + arr[i];
    }
    return sum ;
}

int main (){
    cout << "Enter the number of element in the array " << endl;
    int n ;
    cin >> n ;
    int *arr = new int[n];
    cout << "Enter the value of the array " << endl;
    for (int i =0;i<n ;i++){
        cin >> arr[i] ;
    }
    cout << "The sum of the arrray is " <<sum(arr,n);

} */


/* #include<bits/stdc++.h>
using namespace std ;
int update (int *arr,int n ){
    int sum =0;
    for (int i =0;i<n ;i++){
        sum = sum + arr[i];
    }
    return sum ;
}
int main (){
cout << "Enter the number of the array elemnt you want to enter " << endl;
int n ;
cin >> n ;
int *arr =new int[n];
cout << "Enter the value of the array " << endl;
for (int i =0;i<n;i++){
    cin >> arr[i];
}
cout << "The sum of the array is " << update(arr,n) << endl;
} */

#include<bits/stdc++.h>
using namespace std ;
int main (){
    while (true){
        int i =5;
    }
    while(true){
        int *i = new int ;
    }
}