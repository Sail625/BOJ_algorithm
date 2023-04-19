#include <iostream>
#include <string>
using namespace std;

int main(){
    string Num;
    
    cin >> Num;
    int sec=0;

    for(char c : Num){
        if(c == 'A' || c == 'B' || c == 'C'){
            sec += 3;
        }
        else if(c == 'D' || c == 'E' || c == 'F'){
            sec += 4;
        }
        else if(c == 'G' || c == 'H' || c == 'I'){
            sec += 5;
        }
        else if(c == 'J' || c == 'K' || c == 'L'){
            sec += 6;
        }
        else if(c == 'M' || c == 'N' || c == 'O'){
            sec += 7;
        }
        else if(c == 'P' || c == 'Q' || c == 'R' || c == 'S'){
            sec += 8;
        }
        else if(c == 'T' || c == 'U' || c == 'V'){
            sec += 9;
        }
        else if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z'){
            sec += 10;
        }
    }
    
    cout << sec;
    
    return 0;
}