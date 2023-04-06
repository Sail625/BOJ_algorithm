#include <iostream>

using namespace std;

int main(){
    int A[9], count=0, max=0;
    
    for(int i=0; i<9; i++){
        cin >> A[i];
        if(max<A[i]){
            count=i;
            max=A[i];
        }
    }
    
    cout << max << "\n" << count+1;
        
    return 0;
}