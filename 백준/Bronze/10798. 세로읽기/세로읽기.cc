#include <iostream>
#include <string>

int main(){
    std::string list[5] = {};
    std::string out_list[15] = {};
    
    for(int i=0; i<5; i++){
        std::getline(std::cin, list[i]);
        for(int j=0; j<15; j++){
            if(list[i][j] == '\0') break;
            out_list[j].append(1, list[i][j]);
        }
    }
    
    for(int i=0; i<15; i++){
        std::cout << out_list[i];
    }
    
    return 0;
}