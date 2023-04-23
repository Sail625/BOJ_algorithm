#include <iostream>

int main(){
    int area[100][100] = {0};
    int P_num;
    int x, y, count = 0;
    
    std::cin >> P_num;
    
    for(int i=0; i<P_num; i++){
        std::cin >> x >> y;
        for(int j=x; j<x+10; j++){
            for(int k=y; k<y+10; k++){
                area[j][k] = 1;
            }
        }
    }
     
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(area[i][j] == 1){
                count++;
            }
        }
    }
    
    std::cout << count;
    
    return 0;
}