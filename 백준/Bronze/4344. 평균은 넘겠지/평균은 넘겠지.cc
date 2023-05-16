#include <iostream>

//백준 4344 : 평균은 넘겠지

//평균
double avg(int N, const int* score) {
    int sum = 0;
    double average = 0;

    for (int i = 0; i < N; i++) {
        sum += score[i];
    }

    average = (double) sum / N;
    return average;
}

//평균을 넘는 학생 비율
double find_rate(double avg, const int* score, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (avg < score[i]) {
            count++;
        }
    }
    return (double)count / N * 100;
}



int main() {
    int C, N;

    std::cin >> C;

    int* score;

    for (int i = 0; i < C; i++) {
        std::cin >> N;
        score = new int[N];
        for (int j = 0; j < N; j++) {
            std::cin >> score[j];
        }

        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << find_rate(avg(N, score), score, N) << "%\n";
        delete[] score;
    }
}
