#include <iostream>
using namespace std;

int main(){
    int find_k, find_q, find_r, find_b, find_n, find_p;
    
    cin >> find_k >> find_q >> find_r >> find_b >> find_n >> find_p;
    
    cout << 1-find_k << " ";
    cout << 1-find_q << " ";
    cout << 2-find_r << " ";
    cout << 2-find_b << " ";
    cout << 2-find_n << " ";
    cout << 8-find_p ;
    
    return 0;
}