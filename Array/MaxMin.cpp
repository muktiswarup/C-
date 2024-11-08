#include <iostream>
#include<climits>
using namespace std;

int min (int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(min >arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int max(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[10] = {1, 5, 4, 8, 9, 6, 3, 18, 8, 6};
    int size = 10;
    int maxi= max(arr, size);
    int mini=min (arr,size);
    cout << "The maximum value of the array is :" << maxi << endl;
    cout << "The minimum value of the array is :" << mini << endl;
}