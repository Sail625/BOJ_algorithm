#include <iostream>
#include <string>
#include <cstring>

int main(){
    std::string S;
    
    std::cin >> S;
    
    int array[26];
    std::memset(array, -1, sizeof(array)); //-1로 초기화
    int count = 0;
    
    for(char c : S){
        if(array[c - 'a'] == -1){
            array[c - 'a'] = count;
        }
        count++;
    }
    
    for(int i = 0; i < 26; i++){
        std::cout << array[i] << " ";
    }
    
    return 0;
}