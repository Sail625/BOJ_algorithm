#include <iostream>

using namespace std;
int main(){
    int N;
    int M=0, Sum=0;
    cin >> N ;
    int List[N];
    
    for(int i=0; i<N; i++) {
        cin >> List[i];
        Sum += List[i];
        
        if(List[i]>M)
            M = List[i];        
    }
        
    cout << (float)Sum/N/M*100 ;       
    
    return 0;
}