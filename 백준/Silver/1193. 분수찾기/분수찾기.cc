#include <iostream>
using namespace std;

// <백준 1193>

int main() {
    int N; //입력 숫자
    cin >> N;
    int First_Num = 1; //line의 첫 번째 count 숫자
    int sum = 1; //분자값 + 분모값
    int i, num, den; // line, 분자, 분모

    for (i = 1; ; i++) { //i : line
        if (First_Num <= N && N < First_Num + i){
            sum++;
            break;
        }
        else {
            sum++;
            First_Num += i;
        }
    }


    if (i % 2 == 0) { //짝수열 일 때
        num = 1; //분자
        den = sum - 1; // 분모
        while (N != First_Num) {
            num++;
            den--;
            First_Num++;
        }       
    }
    else { //홀수열 일 때
        num = sum - 1; //분자
        den = 1; // 분모
        while (N != First_Num) {
            num--;
            den++;
            First_Num++;
        }
    }

    cout << num << "/" << den;

    return 0;
}
