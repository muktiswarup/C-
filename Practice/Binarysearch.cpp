#include<iostream>
using namespace std;
int binarysearch (int arr[],int size,int key){
    int start =0;
    int end=size-1;
    int mid = start + (end-start)/2;
    while (start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return 1;
}
int main (){
    int even[4]={10,20,30,40};
    int odd[5]={10,20,30,45,56};
    cout << "The key value is present in the idex of " <<  binarysearch(even,4,30) << endl;
    cout << "The key value is present in the idex of " <<  binarysearch(odd,5,10) << endl;
}