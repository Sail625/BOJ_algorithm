#include <iostream>

using namespace std;
int main(){
    int T = 0, Num = 0;
    cin >> T;
    int A[T], B[T];
    
    while(Num < T){
        cin >> A[Num] >> B[Num];
        cout << "Case #" << Num+1 << ": " << A[Num] + B[Num] << "\n";
        Num += 1;
    }
    
    return 0;
}