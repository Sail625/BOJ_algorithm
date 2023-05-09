#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string B_Num;

    while (N) {
        
        if (N % B < 10) { //나머지
            B_Num += N % B + '0'; 
        }
        else {
            B_Num += N % B - 10 + 'A';
        }
        
        N /= B; //몫
    }

    reverse(B_Num.begin(),B_Num.end());
    
    cout << B_Num;

    return 0;
}

