#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string A;
    int sum = 0;
    
    cin >> N >> A;
    
    for(int i=0; i<N; i++){
        sum += A[i] - '0';
    }
    
    cout << sum;
    
    return 0;
}