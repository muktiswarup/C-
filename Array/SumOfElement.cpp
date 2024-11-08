#include<iostream>
using namespace std;
int sum (int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main (){
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size ;
    int arr[size];
    cout << "Enter " << size << " "<<"Element" << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "The sum of the array is :" << sum(arr,size) << endl;
}