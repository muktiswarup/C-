#include<iostream>
using namespace std ;
int checkSorted(int *arr,int size){
    if(size ==0 || size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false ;
    }
    else {
        int check= checkSorted(arr+1,size-1);
        return check;
    }
    
}
int main (){
    int arr[5]= {1,2,10,4,5};
    int size =5;
    int ans =checkSorted(arr,size);
    if(ans){
        cout << "It is a sorted array " << endl;

    }else {
        cout << "It is not a sorted array " << endl;
    }
}