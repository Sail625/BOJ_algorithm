#include <iostream>

using namespace std;

void change(int C, int* Q, int* D, int* N, int* P) {
    *Q = C / 25;
    *D = (C % 25) / 10;
    *N = (C % 25 % 10) / 5;
    *P = (C % 5);
}

int main(){
    int Test_num, Cent;
    int Quarter, Dime, Nickel, Penny;
    
    cin >> Test_num;
    
    for(int i=0; i<Test_num; i++){
        cin >> Cent;
        change(Cent, &Quarter, &Dime, &Nickel, &Penny);
        cout << Quarter << ' ' << Dime << ' ' << Nickel << ' ' << Penny << '\n';
    }
    
    
    return 0;
}