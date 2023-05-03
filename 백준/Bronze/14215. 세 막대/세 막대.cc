#include <iostream>
#include <algorithm>

int main(){
    int array[3];
    for(int i=0; i<3; i++){
        std::cin >> array[i];
    }
    std::sort(array, array+3);
    
    if(array[2] >= array[0]+array[1]){
        std::cout << (array[0]+array[1])*2-1;
    }
    else{
        std::cout << array[0]+array[1]+array[2];
    }
    
    return 0;
}