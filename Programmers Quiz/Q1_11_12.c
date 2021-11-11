/* 정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.*/

/* 제한 조건
num은 int 범위의 정수입니다.
0은 짝수입니다.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char)*num);
    if (num%2!=0)   answer = "Odd";
    else            answer = "Even";
    return answer;
}

int main(){
    printf("%c",solution(3));
    printf("%s",solution(3));
    return 0;
}