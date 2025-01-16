//Dynamic Array 

/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    cout << "Enter the no of row and column" << endl;
    int n ;
    cin >> n ;
    int **arr= new int *[n];
    for (int i =0;i<n ;i++){
        arr[i]= new int[n];
    }
    cout << "Enter the element of the array " << endl;
    for(int i =0;i<n ;i++){
        cout << "Row no " << i+1 << endl;
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i =0;i<n ;i++){
        for (int j=0;j<n;j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    for (int i=0;i<n ;i++){
        delete [] arr[i]
    }
} */

#include<bits/stdc++.h>
using namespace std ;
int main (){
    cout << "Enter the no of row in the matrix " << endl;
    int row ;
    cin >> row ;
    cout<<"Enter the no of column in the matrix " << endl;
    int col ;
    cin >> col ;
    int ** arr = new int * [row] ;
    //Createion done 
    for (int i =0;i<row;i++){
        arr[i]=new int [col];
    }
    // Take input 
    cout << "Enter the array element " << endl;
    for(int i =0;i<row ;i++){
        cout << "For the row no  " << i+1 << endl;
        for (int j =0;j<col;j++){
            cin >> arr[i][j];
        }
    }
    //Output 
    for (int i =0;i<row ;i++){
        for (int j=0;j<col ;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}