
#include<bits/stdc++.h>
using namespace std ;

bool isSearch(int arr[][4],int target,int row,int col){
    for(int i =0;i<row;i++){
        for (int j=0;j<col;j++){
           if(arr[i][j]==target){
               return 1;
           }
        }
    }
    return 0;
}
void sumOfRow(int arr[][4],int row,int col){
    for(int i =0;i<row;i++){
        int sum =0;
        for (int j=0;j<col;j++){
          sum +=arr[i][j];
           }
           cout << "Sum of row " << i + 1 << ": " << sum << endl; 
        }
        cout << endl ;
    }

void sumOfCol(int arr[][4],int row,int col ){
    for (int i =0;i<col;i++){
        int sum =0;
        for (int j=0;j<row;j++){
            sum+=arr[i][j];
        }
        cout << "Sum of col " << i + 1 << ": " << sum << endl; 
    }
}

int main (){
    int arr [3][4];
    cout << "Enter the array element order would be 3 row and 4 column :";
    for(int i =0;i<3;i++){
        for (int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element you want to find in the 2D array: ";
    int target ;
    cin >> target;
    if (isSearch(arr,target,3,4)){
        cout << "Element found"<< endl;
    }
    else {
        cout << "Element not found"<< endl;
    }
    cout << "The sum of the row is : " << endl ;
    sumOfRow(arr,3,4);
    cout << "The sum of the colum is :" << endl;
    sumOfCol(arr,3,4);
} 


