#include <stdio.h>

int main() {
    int N;  // 시험 본 과목의 개수
    int scores[1000];  // 세준이의 현재 성적
    int max_score = 0;
    double new_scores[1000];
    double new_average = 0;

    scanf("%d", &N);  // 시험 본 과목의 개수 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);  // 세준이의 현재 성적 입력
        if (scores[i] > max_score) {
            max_score = scores[i];  // 최댓값 갱신
        }
    }

    // 새로운 성적 계산
    for (int i = 0; i < N; i++) {
        new_scores[i] = (double)scores[i] / max_score * 100;
    }

    // 새로운 평균 계산
    for (int i = 0; i < N; i++) {
        new_average += new_scores[i];
    }
    new_average /= N;

    printf("%.2lf\n", new_average);  // 새로운 평균 출력

    return 0;
}
