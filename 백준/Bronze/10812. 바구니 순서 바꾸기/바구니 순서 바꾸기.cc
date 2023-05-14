#include <iostream>

//백준 10812 : 바구니 순서 바꾸기
void arrange(int N, int i, int j, int k, int* array) {
    int* temp = new int[N];

    for (int c = 0; c < N; c++) {
        temp[c] = array[c];
    }

    for (int c = i - 1; c < k - 1; c++) {
        temp[(j - k + 1) + c] = array[c];
    }
    
    for (int c = k - 1; c < j; c++) {
        temp[c - (k - i)] = array[c];
    }

    // 바뀐 배열 복사
    for (int c = 0; c < N; c++) {
        array[c] = temp[c];
    }

    delete[] temp;
}

int main()
{
    int N, M; //바구니 N개, M번 회전 수
    std::cin >> N >> M;

    int i, j, k;

    int* array = new int[N]; 
    
    //array 초기화
    for (int a = 0; a < N; a++) {
        array[a] = a+1;
    }

    for (int b = 0; b < M; b++) {
        std::cin >> i >> j >> k;
        arrange(N, i, j, k, array);
    }
    
    //출력
    for (int c = 0; c < N; c++) { 
        std::cout << array[c] << ' '; 
    }

    // 메모리 해제
    delete[] array;

    return 0;
}
