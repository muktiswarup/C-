#include<iostream>
using namespace std;
void  selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
            swap(arr[i],arr[minindex]);
    }
    
}
int main (){
    int arr[5]={12,5,6,8,4};
    selectionSort(arr,5);
    cout << "The sorting of the array is " ;
    for(int i=0;i<5;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}