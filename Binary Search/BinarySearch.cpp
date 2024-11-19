#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start <= end ){
        if (arr[mid]==key){
            return mid ;
        }
        if(key > arr[mid]){
            start =mid +1;
        } else {
            end =mid -1;
        }
        mid =  start + (end-start)/2;
    }
    return -1;
}
int main (){
    int even[6]= {18,23,25,65,89,99};
    int odd[5]= {23,25,65,89,99};
    int index = binarysearch(even,6,89);
    int index2=binarysearch(odd,5,25);
    cout << "Index of 89 is " << index << endl;
    cout << "Index of 25 is " << index2 << endl;
}