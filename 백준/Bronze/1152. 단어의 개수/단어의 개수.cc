#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    int count = 0;
    stringstream ss(s);
    
    string word;
    while(ss >> word){ //단어를 읽어올 때
        count++;
    }
    cout << count;
    
    return 0;
}