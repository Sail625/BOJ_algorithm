#include <iostream>

int triangle(int a, int b, int c){
    if(a == 0 && b == 0 && c == 0){
        return 0; //0. 계산하지 않음
    }
    else{
        if(a >= b+c || b >= a+c || c >= a+b){
            return 4; //4. Invalid
        }
        else if(a == b && b == c){
            return 1; //1. Equilateral
        }
        else if(a != b && a != c && b != c){
            return 3; //3. Scalene
        }
        else{
            return 2; //2. Isosceles
        }
    }
}

int main(){
    int list[3], state;
       
    do{
        for(int i=0; i<3; i++){
            std::cin >> list[i];
        }
        
        state = triangle(list[0], list[1], list[2]);
        
        if(state == 0){
            break;
        }
        else if(state == 1){
            std::cout << "Equilateral\n";
        }
        else if(state == 2){
            std::cout << "Isosceles\n";
        }
        else if(state == 3){
            std::cout << "Scalene\n";
        }
        else if(state == 4){
            std::cout << "Invalid\n";
        }
        
    }while(1);
    
    
    return 0;
}