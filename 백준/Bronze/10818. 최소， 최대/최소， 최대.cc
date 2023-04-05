#include <iostream>
using namespace std;

int main(){
    int N, min, max;
    cin >> N;
    int Num[N];
    
    for(int i=0; i<N; i++){
        cin >> Num[i];    
    }
    
    min = Num[0];
    max = Num[0];
    
    for(int i=1; i<N; i++){
        if(min > Num[i])
            min = Num[i];
        if(max < Num[i])
            max = Num[i];
    }
    
    cout << min << " " << max;

    return 0;
}