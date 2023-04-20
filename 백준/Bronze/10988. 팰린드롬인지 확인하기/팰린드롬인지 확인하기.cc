#include <iostream>
#include <string>

int main(){
    std::string word; 
    std::cin >> word;
    
    int maxlen = word.length();
    int is_palindraome = 1;
    
    for(int i=0; i<maxlen/2; i++){
        if(word[i] != word[maxlen-1-i]){
            is_palindraome = 0;
            break;
        }   
    }
    
    if(is_palindraome == 1){
        std::cout << "1\n";
    }
    else{
        std::cout << "0\n";
    }    
    return 0;
}