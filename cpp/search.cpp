#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

template< typename T, typename Iter>
Iter search(Iter pStart, Iter pEnd, T target){
    for(Iter p = pStart; p != pEnd; p++){
        if( *p == target ){
            return p;
        }
    }
    return pEnd;
}


int main(){
   vector<int> intVect;
   intVect.push_back(6);
   intVect.push_back(4);
   intVect.push_back(5);

   vector<int>::iterator iter = search(intVect.begin(),intVect.end(), 5);
   cout << "index: " << iter-intVect.begin() << endl;


}


