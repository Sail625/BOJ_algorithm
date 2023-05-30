#include <iostream>
#include <string>

int main()
{
    std::string Jae, Doc;
    
    std::cin >> Jae >> Doc;

    if(Jae.size() < Doc.size()){
        std::cout << "no";
    }
    else{
        std::cout << "go";
    }

    return 0;
}