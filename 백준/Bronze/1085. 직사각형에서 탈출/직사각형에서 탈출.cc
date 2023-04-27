#include <iostream>

int main(){
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    
    int arr[4], min;
    int* ptr = arr;
    *(ptr+0) = w-x;
    *(ptr+1) = h-y;
    *(ptr+2) = x;
    *(ptr+3) = y;
    
    min = *(ptr+0);
    
    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(min > *(ptr+i)){
            min = *(ptr+i);
        }
    }
    
    std::cout << min;
}