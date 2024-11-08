#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main (){
    int arr [10]={7,8,9,4,5,6,1,2,3,0};
    int size =10;
    printArray(arr,size);
    reverse(arr,size);
    printArray(arr,size);
    cout << arr[1] << " ";
}