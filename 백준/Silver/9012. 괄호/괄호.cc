#include <iostream>
#include <string>

int main()
{
    int T;
    std::string S;
    int count, state;
    
    std::cin >> T;
    
    for(int i=0; i<T; i++){
        count = 0;
        state = 0;
        std::cin >> S;
        for(char s : S){
            if(s == '(') {
                count++;
            }
            else{
                count--;  
            } 
            
            if(count < 0){
                state = 1;
                break;
            }
        }
        if(state != 0||count !=0){
            std::cout << "NO\n";
        }
        else{
            std::cout << "YES\n";
        }
    }
    
    return 0;
}