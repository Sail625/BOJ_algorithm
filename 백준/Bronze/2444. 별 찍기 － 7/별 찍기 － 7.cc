#include <iostream>

int main(){
    int N;
    std::cin >> N;
    
    for(int i=0; i<2*N-1; i++){        
        if(i<N){ //N번째 줄까지
            for(int j=0; j<N-(i+1); j++)
                std::cout << ' ';
            for(int k=0; k<2*i+1; k++)
                std::cout << '*';
        }
               
        else{ //N+1번째 줄부터 끝까지
            for(int j=0; j<(i+1)-N; j++)
                std::cout << ' ';
            for(int k=0; k<2*(2*N-1-i)-1; k++)
                std::cout << '*';
        }
        std::cout << '\n';
    }
    
    return 0;
}