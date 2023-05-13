#include <iostream>

int main(){
    int N, line, line_min = 1;
    std::cin >> N;
    
    for(line = 1; ;line++){
        if(N == 1){
            break;
        }
        else if(line_min < N && N <= line_min + 6*line){
            line++;
            break;
        }
        else{
            line_min += 6*line;
        }   
    }
    
    std::cout << line;
    
    return 0;
}