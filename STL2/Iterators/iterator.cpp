// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     vector<int>v= {1,5,6,7,5,8};
//     vector<int>::iterator it ;
//     for(it=v.begin();it!=v.end();it++){
//         cout << *it << " ";
//     }
//     cout << endl ;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     vector<int>v= {5,6,8,9,7};
//     vector<int>::iterator it ;
//     for (it=v.begin();it!=v.end();it++){
//         cout<<*it<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     vector<pair<int,int>>v_p= {{5,2},{6,9},{6,9}};
//     vector<pair<int,int>>::iterator it ;
//     for(it=v_p.begin();it!=v_p.end();it++){
//         cout << (*it).first << (*it).second << " ";
//     }
//     cout << endl;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main (){
//     vector<pair<int,int>>vp= {{4,5},{5,6},{9,8}};
//     vector<pair<int,int>>::iterator it ;
//     for (it=vp.begin();it!=vp.end();it++){
//         cout <<(*it).first << (*it).second << " " ;
//            }
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main (){
//     vector<int> v= {1,5,6,7,8,9};
//     for(int &value: v){
//        value ++;
//     }
//     for (int value : v){
//         cout << value *2 << " ";
//     }
    
// }

#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<pair<int,int>>vp= {{5,6},{6,8},{9,6}};
    for (auto &v:vp){
        cout << v.first << " " << v.second ;
    }
}