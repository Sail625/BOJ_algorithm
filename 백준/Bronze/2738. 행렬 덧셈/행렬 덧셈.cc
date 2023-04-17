#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    int arrayA[N][M];
    int arrayB[N][M];
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> arrayA[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> arrayB[i][j];
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << arrayA[i][j] + arrayB[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}