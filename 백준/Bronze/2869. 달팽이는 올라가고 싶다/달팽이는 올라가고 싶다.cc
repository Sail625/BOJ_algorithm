#include <iostream>

int main(){
    
    int A, B, V, high=0, day=1;
    
    std::cin >> A >> B >> V;
    
    int gap = A - B;
    
    high += A;
    if(V > high){
        day += (V-high)/gap;
        if((V-high)%gap != 0){
            day++;
        }
    }
    
    std::cout << day;
    

    return 0;
}
