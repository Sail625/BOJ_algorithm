#include <iostream>

using namespace std;
int main(){
    int N, M, i, j, temp;
    cin >> N >> M;
    
    int List[N];

    for(int a = 0 ; a < N ; a++)
        List[a] = a+1;
    
    for(int a = 0 ; a < M ; a++){
        cin >> i >> j ;
        int count = j;
        
        for(int b = i ; b <= (i+j)/2 ; b++){
            temp = List[b-1];
            List[b-1] = List[count-1];
            List[count-1] = temp;
            count--;
        }   
    }

    for(int a = 0 ; a < N ; a++)
        cout << List[a] << " " ;
    
    return 0;
}