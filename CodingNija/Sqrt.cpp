/* Sample Input 1:
6
Sample Output 1:
2
Explanation of Sample Input 1:
The square root of the given number 6 lies between 2 and 3, so the floor value is 2.
Sample Input 2:
100
Sample Output 2:
10
Explanation of Sample Output 2:
The square root of the given number 100 is 10.
Expected Time Complexity:
Try solving this in O(log(n)).
Constraints:
0 <= n <= 10 ^ 9

Time Limit: 1 sec. */

#include <iostream>
using namespace std ;
int squrt(int n ){
    int start =0;
    int end = n ;
    
    int result =0;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if (1LL * mid*mid<=n){
            result =mid ;
            start=mid+1;
        }else {
            end=mid-1;
        }
    }
    return result ;
}

int main() {
    cout << "Enter the no you want " << endl;
    int n ;
    cin >> n;
  int d=squrt(n);
  cout << "The square root of the no "<<n<<" "<< d << endl;
}