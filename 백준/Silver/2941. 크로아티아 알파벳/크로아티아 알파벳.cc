#include <iostream>
#include <string>

int main()
{
    std::string S;
    int i=0, count = 0;
    
    std::cin >> S;
    
    for(char s : S){
        
        
        
        if(s == '='){
            count--;
            if(S[i-1] == 'z' && S[i-2] == 'd'){
                count--;
            }
        }
        
        else if(s == '-'){
            count--;
        }
        
        else if(s == 'j'){
            if(S[i-1] == 'l' || S[i-1] == 'n'){
                count--;
            }
        }
        i++;
        count++;
    }
    std::cout << count;

    return 0;
}