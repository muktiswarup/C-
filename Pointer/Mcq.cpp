/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
    int a = 7;
    int b =18;
    int *ptr = &b;
    *ptr = 9;
    cout << a << " " << b << endl; 
}

//output 7 9 */



// 2nd 

/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
    int first = 16;
    int *p = &first ;
    int *q =p;
    (*q)++;
    cout << first << endl;
} 
output 17
*/

//3rd 

/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
    int first = 16;
    int *p = &first ;
   cout << (*p)++ << endl;
    cout << first << endl;
}
output 16 17 */

//4th 

/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
   int *p =0;
   int first =110;
   p = &first ;
   cout << *p << endl;
} */

//5th
/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
    int first = 16;
    int *p = &first ;
   cout << (*p)++ << endl;
    cout << first << endl;
} */

//6th

/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
    int a[5];
    int *ptr ;
    cout << sizeof(a) << "  " << sizeof(ptr) <<endl;
} */
//7th
/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    int a[3]= {1,2,3};
    int *p = a ;
    cout << *p << " " << *(p+1);
    
} */
/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    int a[3]= {1,2,3};
    cout << a <<" " <<  &a+2 << endl;
} */

//9th

/* 

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int a[3]= {1,2,3};
    int *p = a;
    cout << p[2] <<endl;
    


} */

/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    
    
    char ch[] = "abcde";
    char *p =ch;
    cout << p<< endl;
    cout << p[0] << endl;
    cout << ch[2] << endl;
    *p++;
    cout << p << endl;
    
// abcde
// a
// c
// bcde


   
} */