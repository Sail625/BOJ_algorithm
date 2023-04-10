#include <iostream>
using namespace std;

int main(){
    int A, I, melody;
    
    cin >> A >> I;
    
    if(A == 1){
        melody = A*I;
        cout << melody;
    }
    else{
        melody = A*(I-1)+1;
        cout << melody;
    }
    
    return 0;
}