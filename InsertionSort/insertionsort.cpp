#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp= arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main (){
    int arr [5]={5,10,4,9,7};
    insertionsort(arr,5);
    for (int i =0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl ;

}