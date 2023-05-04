#include <iostream>
#include <string>
#include <cmath>


int main(){
    std::string Num;
    int B, dec_Num=0;
    
    std::cin >> Num >> B;
    
    for(int i=Num.length()-1; i>=0; i--){
        if('0' <= Num[i] && Num[i] <= '9'){
            dec_Num += (Num[i]-'0') * pow(B, Num.length()-1-i);
        }
        else{
            dec_Num += (Num[i]-'A'+10) * pow(B, Num.length()-1-i);
        }
    }
    std::cout << dec_Num;
    
    return 0;
}