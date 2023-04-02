#include <iostream>

using namespace std;
int main(){
    int N, Find_Num, count = 0;
    cin >> N;
        
    int List[N];
    for(int i=0; i<N; i++){
        cin >> List[i] ;
    }
    cin >> Find_Num;
    
    for(int i=0; i<N; i++){
        if(List[i]==Find_Num)
            count++;
    }
    
    cout << count ;
    
    return 0;
}