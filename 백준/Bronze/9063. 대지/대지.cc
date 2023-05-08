#include <iostream>

int main(){
    int N;
    std::cin >> N;
    
    int b[N][2];
      
    for(int i=0; i<N; i++){ 
        for(int j=0; j<2; j++){
            std::cin >> b[i][j]; //좌표 입력
        }
    }

    int maxX = b[0][0], maxY = b[0][1];
    int minX = b[0][0], minY = b[0][1]; // max min 초기화
    
    for(int i=0; i<N; i++){ 
        if(maxX < b[i][0])
            maxX = b[i][0];
        if(minX > b[i][0])
            minX = b[i][0];
    }
    
    for(int i=0; i<N; i++){
        if(maxY < b[i][1])
            maxY = b[i][1];
        if(minY > b[i][1])
            minY = b[i][1];
    }
    
    std::cout << (maxX-minX) * (maxY-minY);
    
    return 0;
}