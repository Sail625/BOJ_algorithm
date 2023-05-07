#include <iostream>
#include <string>
#include <cstring>

int main(){
    std::string S;
    std::cin >> S;
    int array[26] = {0};
    int count = 0, max_count = 0, num_count;
    
    for(char c : S){
        if(c >= 'a' && c <= 'z'){ //소문자
            array[c - 'a']++;
        }
        else{ //대문자
            array[c - 'A']++;
        }
    }
    
    for(int i=0; i<26; i++){
        if(max_count < array[i]){
            max_count = array[i]; // 최대 알파벳 중복 횟수
            num_count = i;
        }
    }
    
    for(int i=0; i<26; i++){
        if(max_count == array[i]){ //최대 사용 알파벳이 여러 개인지 판별
            count++;
        }
    }
    
    if(count == 1){
        std::cout << char(num_count + 'A');
    }
    else{
        std::cout << "?";
    }
    
    return 0;
}