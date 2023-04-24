#include <iostream>

int main(){
    int A, B, sang_A, sang_B;
    std::cin >> A >> B;
    
    sang_A = A -A/100*100-A%10 +A%10*100+A/100;
    sang_B = B -B/100*100-B%10 +B%10*100+B/100;
    
    if(sang_A >= sang_B)
        std::cout << sang_A;
    else
        std::cout << sang_B;
    
    return 0;
}