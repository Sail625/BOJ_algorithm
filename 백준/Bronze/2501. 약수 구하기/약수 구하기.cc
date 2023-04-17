#include <iostream>
using namespace std;

int main(){
    int Num, K, Count=0;
    cin >> Num >> K;
    
    for(int i=1; i<=Num; i++){
       if(Num%i == 0){
           Count++;
           if(Count == K){
               cout << i;
               break;
           }   
        }
        if(i==Num && Count < K)
            cout << "0";
    }
    
    return 0;
}