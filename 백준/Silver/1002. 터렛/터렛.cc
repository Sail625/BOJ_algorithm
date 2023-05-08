#include <iostream>
#include <cmath>

using namespace std;

void cal(double* rt, int* result, int* P){
    *rt = sqrt(pow(P[0]-P[3],2)+pow(P[1]-P[4],2));
    
    if(*rt == P[2] + P[5]){ //두 점 사이에 위치할 때. 1개
        *result = 1;
    }
    else if(P[0] == P[3] && P[1] == P[4]){ // 두 점의 위치가 같을 때
        if(P[2] == P[5]){ //거리가 같으면
            *result = -1;
        }
        else{ //거리가 다르면
            *result = 0;
        }
    }
    else if(*rt < P[2] + P[5]){
        if(*rt == P[2] - P[5] || *rt == P[5] - P[2]){ // 두 점을 이은 직선 위에 위치할 때. 1개
            *result = 1;
        }
        else if(*rt + P[2] < P[5] || *rt + P[5] < P[2]){ 
            *result = 0;
        }
        else{ //2개
            *result = 2;
        }
    }
    else{
        *result = 0;
    }
        
}

int main(){
    int T, result;
    double rt;
    int array[6]; // x1, y1, r1, x2, y2, r2
    int* P = array;
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        for(int i=0; i<6; i++){
            cin >> P[i];
        }
        cal(&rt, &result, P);
        cout << result << endl;
    }
    
    return 0;
}