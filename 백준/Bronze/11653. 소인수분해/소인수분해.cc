#include <iostream>
using namespace std;

int main(){
    
    int N;
    int count = 2;
    
    cin >> N;
    
    while(N!=1){
        if( (N%count) == 0){
            N /= count;
            cout << count << "\n";
        }
        else
            count++;
    }
    return 0;
}
