#include <iostream>
#include <string>

int main()
{
    int lower, upper, num, gap;
    std::string S;
    
    while(getline(std::cin, S)){
        lower = 0;
        upper = 0;
        num = 0;
        gap = 0;
        for(char s : S){
            if(s == ' ') gap++;
            else if('0' <= s && s <= '9') num++;
            else if('a' <= s && s <= 'z') lower++;
            else upper++;
        }    
        std::cout << lower << " " << upper << " " << num << " " << gap << std::endl;
    }
    
    return 0;
}
