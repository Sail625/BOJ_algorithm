#include <iostream>

using namespace std;

int main(){
    int X, N, Sum = 0 ;
    cin >> X >> N ;
    
    int a[N], b[N];
    
    for(int i = 0 ; i < N ; i++){
        cin >> a[i] >> b[i] ;
        Sum += a[i] * b[i] ;
    }
    
    if(X == Sum) cout << "Yes" ;
    else         cout << "No" ;
    
    return 0;
}