#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    
    
    int A1, A2, A3;
    
    A1 = a * (b%10);
    A2 = a * (b%100-b%10)/10;
    A3 = a * (b-b%100)/100;
    
    cout << A1 << endl;
    cout << A2 << endl;
    cout << A3 << endl;
    cout << a * b << endl;
    
  
    return 0;
}