#include <iostream>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    string str[T];
    
    for(int i=0; i<T; i++){
        cin >> str[i];
        cout << str[i].front() << str[i].back() << "\n";
    }
    
    return 0;
}