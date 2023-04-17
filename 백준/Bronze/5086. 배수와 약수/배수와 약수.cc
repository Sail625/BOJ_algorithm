#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    
    while(cin >> num1 >> num2){
        if(num1 == 0 && num2 == 0){ //마지막 줄
            break;
        }
        
        else if(num2%num1 == 0){ //num1이 num2의 약수
            cout << "factor\n";
        }
        else if(num1%num2 == 0){ //num1이 num2의 배수
            cout << "multiple\n";
        }
        
        else{ //약수와 배수 모두 아닐 경우
            cout << "neither\n";
        }
    }
    
    return 0;
}