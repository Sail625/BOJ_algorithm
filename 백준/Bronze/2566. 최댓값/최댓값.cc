#include <iostream>

int main(){
    int list[9][9] = {0};
    int Max_Num = 0;
    int row = 0, column = 0;
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            std::cin >> list[i][j];
            if(list[i][j] >= Max_Num){
                Max_Num = list[i][j];
                row = i;
                column = j;
            }
        }
    }
    
    std::cout << Max_Num << "\n" << row+1 << " " << column+1;
    
    return 0;
}