// no duplicate allowed
// 0(1)
#include<iostream>
#include<unordered_set>
using namespace std ;

int main(){
    unordered_set<int> s ;
    s.insert(1) ;
    s.insert(2) ;
    s.insert(2) ;
    s.insert(3) ;

    cout << "Size : " << s.size() << endl ;

    for(auto i : s){
        cout << i << " " ;
    }

}

