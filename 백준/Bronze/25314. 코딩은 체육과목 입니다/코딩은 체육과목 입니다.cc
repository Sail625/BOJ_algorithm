#include <iostream>

using namespace std;
int main(){
    int N = 0 ;
    cin >> N ;
    
    for(int i = (N+3)/4 ; i > 0 ; i--)
        cout << "long " ;

    cout << "int\n" ;    
    
    return 0;
}