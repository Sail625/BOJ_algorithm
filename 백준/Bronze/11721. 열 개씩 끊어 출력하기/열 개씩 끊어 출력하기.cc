#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    int count=0;
    
    getline(cin, N);
    
    for(char c: N){
        count++;
        cout << c;
        
        if(count%10 == 0){
            cout << '\n';
        }
    }
    

    return 0;
}