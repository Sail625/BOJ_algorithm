#include <iostream>
using namespace std;

int main(){
    int now_h, now_m, now_s, cook_time;
    int end_h, end_m, end_s;
    
    cin >> now_h >> now_m >> now_s >> cook_time;
    
    end_h = now_h + cook_time/3600;
    end_m = now_m + (cook_time%3600)/60;
    end_s = now_s + cook_time%60;
    
    if(end_s>=60){
        end_s -= 60;
        end_m += 1;
    }
        
    if(end_m>=60){
        end_m -= 60;
        end_h += 1;
    }
    
    while(end_h>=24)
        end_h -= 24;
    
    cout << end_h << " " << end_m << " " << end_s; 
    
    return 0;
}