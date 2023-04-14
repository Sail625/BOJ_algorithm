#include <iostream>
#include <string>
using namespace std;

int main(){
    int T, R;
    string S, P;
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        cin >> R >> S;

        P = ""; //P 초기화
        
        for(int j=0; j<S.length(); j++){
            P.append(R, S[j]); //S[j]를 R번 추가
        }

        P.append(1, '\n'); //string의 끝
        cout << P;
    }
    
    return 0;
}