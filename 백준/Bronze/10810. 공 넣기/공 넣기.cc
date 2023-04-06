#include <iostream>
using namespace std;

int main(){
    int N, M, i, j, k;
    cin >> N >> M;
    
    int Basket[N]={0};
    
    for(int a=0; a<M; a++){
        cin >> i >> j >> k;
        for(int b=i-1; b<=j-1; b++){
            Basket[b] = k;
        }
    }
    
    for(int a=0; a<N; a++)
        cout << Basket[a] << " ";
    
    return 0;
}