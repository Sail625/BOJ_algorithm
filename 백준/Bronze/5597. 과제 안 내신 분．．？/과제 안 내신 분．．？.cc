#include <iostream>
using namespace std;

int main(){
    int Student_submit[30]={0}, count;
    
    for(int i = 0; i<28; i++){
        cin >> count;
        Student_submit[count-1] = 1;
    }
    
    for(int i = 0; i<30; i++){
        if(Student_submit[i] != 1)
            cout << i+1 << "\n";
    }
    
    return 0;
}