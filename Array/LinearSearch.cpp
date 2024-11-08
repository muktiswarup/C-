// There is a array check wheather an element is present or not
//[12,5,25] CHECK WHEATHER 5 IS PRESENT OR NOT 

#include<iostream>
using namespace std;
int Linear(int arr[],int size, int key){

    for(int i =0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main (){
    int arr[10]={56,8,9,2,7,3,6,9,2,5};
    int size=10;
    int key ;
    cout << "Enter the key value that you want to match:" << endl;
    cin >> key;
    if(Linear(arr,size,key)){
        cout << "The key value matched" << endl;
    }
    else {
        cout << "The key value doesn't match" <<endl;
    }
}