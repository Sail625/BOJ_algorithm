#include <iostream>
#include <string>

int main()
{
    std::string S;
    int N, j, state=0, count=0;
    int Alphabet[26] = {0};
    
    std::cin >> N;
    
    for(int i=0; i<N; i++){
        j = 0;
        std::cin >> S;
        for(char s : S){
            if(Alphabet[s-'a'] == 0){
                Alphabet[s-'a'] = 1;
            }
            else if(Alphabet[s-'a'] == 1 && S[j-1] != S[j]){
                state = 1;
                break;
            }
            j++;
        }
        
        if(state == 0){
            count++;
        }
            
        state = 0;
        for(int k=0; k<26; k++){
            Alphabet[k] = 0;
        }
        
    }
    std::cout << count;
    
    
    return 0;
}