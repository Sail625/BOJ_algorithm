#include <iostream>
#include <string>

int main(){
    std::string word; 
    std::cin >> word;
    
    int maxlen = word.length();
    
    if(maxlen == 1)
        std::cout << "1\n";
    
    for(int i=0; i<maxlen/2; i++){
        if(word[i] != word[maxlen-1-i]){
            std::cout << "0\n";
            break;
        }
        if(i == maxlen/2 - 1){
            std::cout << "1\n";
        }        
    }
    
    return 0;
}