#include <iostream>
#include <algorithm>
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
    
    sort(Num, Num + N);
    
    cout << Num[0] << " " << Num[N-1];

    return 0;
}
