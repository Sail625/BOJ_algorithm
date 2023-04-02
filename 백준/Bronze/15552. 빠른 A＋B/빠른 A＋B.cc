#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;
    int a[T], b[T];
    
    for(int i = 0 ; i < T ; i++){
        cin >> a[i] >> b[i];
        cout << a[i] + b[i] << "\n";
    }
    
    return 0;
}