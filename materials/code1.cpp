/*
 * 인천대학교 프로그래밍(1)
 * 코드 1
 * 작성: ypkim@inu.ac.kr
 * 환경: Visual studio 2019
 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>  

int main() {
    // 여기부터 -------------------------------------------------------
    int num[2] = { 0 };	// 입력할 두 숫자
    char opr;
    int answer = 0, your_answer = 0, total_score = 0;
    srand(time(NULL)); // 난수 초기화
    while ((answer == your_answer)) {
        num[1] = rand() % 10;
        num[2] = rand() % 10;
        opr = rand() % 2;
        if (opr == 0) {	// 정답 생성
            opr = '+';
            answer = num[1] + num[2];
        }
        else {
            opr = '-';
            answer = num[1] - num[2];
        }
        printf("%d %c %d ? ", num[1], opr, num[2]);
        scanf("%d", &your_answer);
        if (answer = your_answer) {  // 정답의 경우
            printf("맞았습니다.\n");
            total_score += 10;
            // 여기까지 -------------------------------------------------------
        }
        else printf("종료: 총점 %d\n", total_score);
    }
    return 0;
}
