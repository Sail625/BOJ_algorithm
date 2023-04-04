#include <iostream>

using namespace std;
int main(){
    int N, M, i, j, temp;
    cin >> N >> M;
    
    int List[N];
    
    for(int k = 0; k < N; k++)
        List[k] = k+1;
    
    for(int k = 0; k < M; k++){
        cin >> i >> j;
        temp = List[i-1];
        List[i-1] = List[j-1];
        List[j-1] = temp;
    }
    
    for(int k = 0; k < N; k++)
        cout << List[k] << " ";
    
    return 0;
}