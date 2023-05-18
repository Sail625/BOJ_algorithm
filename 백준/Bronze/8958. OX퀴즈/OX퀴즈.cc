#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    int T;
    int score, sum_score=0;
    
    cin >> T;
    for(int t=0; t < T; t++){
        score = 0;
        sum_score = 0;
        
        cin >> N;
        for(char s : N){
            if(s == 'O'){ // 'O'
                sum_score += ++score;
            }
            else{ // 'X'
                score = 0;
            }
        }
        cout << sum_score << endl;
    }
    

    return 0;
}