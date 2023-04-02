#include <iostream>

using namespace std;

int main()
{
    int Now_hour, Now_min, Cook_time, Cook_hour, Cook_min;
    cin >> Now_hour >> Now_min >> Cook_time;
    
    Cook_hour = Now_hour + Cook_time/60;
    Cook_min = Now_min + Cook_time%60;
    
    if(Cook_min >= 60)
    {
        Cook_hour += 1;
        Cook_min -= 60;
        
    }
    
    if(Cook_hour >= 24) 
        Cook_hour -= 24;
    
    cout << Cook_hour << " " << Cook_min << endl;
        
    return 0;
}