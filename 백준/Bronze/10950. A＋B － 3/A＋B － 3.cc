#include <iostream>

using namespace std;

int main(){
    int T = 0;
    cin >> T ;
    
    int x[T], y[T];
    
    for(int i = 0; i < T ; i++){
        cin >> x[i] >> y[i] ;
    }
    
    for(int i = 0; i < T ; i++){
        cout << x[i] + y[i] << "\n";
    }
    
    return 0;    
}