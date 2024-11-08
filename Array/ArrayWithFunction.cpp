#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout << "Printing the array " << endl;
    for(int i =0;i<size ;i++){
        cout << arr[i] << endl;

    }
}
int main (){
    int arr [10]={1,2,3,4,5,6,7,8,9,0};
    int n=10;
   update(arr,n);
}