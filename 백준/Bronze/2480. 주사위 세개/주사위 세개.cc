#include <iostream>

using namespace std;

int main()
{
    int x, y, z, Max;
    cin >> x >> y >> z;
    
    Max = x >= y ? (x >= z ? x : z) : (y >= z ? y : z); // 세 수 중 Max
    
    if(x == y && y == z)            cout << 10000+x*1000 << endl;
    else if(x == y || y == z)  cout << 1000+y*100 << endl;
    else if(x == z)            cout << 1000+x*100 << endl;
    else                       cout << Max*100 << endl;   
    
    return 0;
}