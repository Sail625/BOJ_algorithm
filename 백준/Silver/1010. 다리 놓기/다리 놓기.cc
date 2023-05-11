#include <iostream>

using namespace std;

void bridge(long* c, int N, int M) {

    if (M - N < N)
        N = M - N;

    for (int i = 1; i <= N; i++) {
        *c = *c * M-- / i;
    }
    
}


int main() {
    int T_num, N_left, M_right;
    

    cin >> T_num;
    for (int i = 0; i < T_num; i++) {
        long count = 1;
        cin >> N_left >> M_right;
        bridge(&count, N_left, M_right);
        cout << count << endl;
    }

}