#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    stack<char> B_Num;

    while (N) {
        
        if (N % B < 10) {
            B_Num.push(N % B + '0'); //나머지
        }
        else {
            B_Num.push(N % B - 10 + 'A');
        }
        
        N /= B; //몫
    }

    while(!B_Num.empty()) {
        cout << B_Num.top();
        B_Num.pop();
    }

    return 0;
}

