#include <iostream>

//백준 4344 : 평균은 넘겠지

//평균
double avg(int N, const int* array) { 
    int sum = 0;
    double average = 0;

    for (int i = 0; i < N; i++) {
        sum += array[i];
    }

    average = (double) sum / N;
    return average;
}

//평균을 넘는 학생 비율
double find_rate(double avg, const int* array, int N) { 
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (avg < array[i]) {
            count++;
        }
    }
    return (double)count / N*100;
}



int main() {
    int C, N;

    std::cin >> C;

    int* array;

    for (int i = 0; i < C; i++) {
        std::cin >> N;
        array = new int[N];
        for (int j = 0; j < N; j++) {
            std::cin >> array[j];
        }

        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << find_rate(avg(N, array), array, N) << "%\n";
        delete[] array;
    }
}