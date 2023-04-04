#include <iostream>
using namespace std;

int main(){
    int List[10], rest[10], count = 10;
    
    for(int i = 0; i<10; i++){
        cin >> List[i];
        rest[i] = List[i] % 42;
    }
    
    for(int i = 0; i<10; i++){
        for(int j = i+1; j<10; j++){
            if(rest[i] == rest[j]){
                count--;
                break;
            }
        }
    }
    cout << count;
    
    return 0;
}