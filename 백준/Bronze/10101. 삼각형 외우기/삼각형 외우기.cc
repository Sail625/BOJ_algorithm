#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    
    if(a == b && b == c){
        std::cout << "Equilateral";
    }
    else if(a+b+c != 180){
        std::cout << "Error";
    }
    else{
        if(a != b && a != c && b != c){
            std::cout << "Scalene";
        }
        else{
            std::cout << "Isosceles";
        }
    }
    
    return 0;
}