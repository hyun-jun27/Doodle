#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2)
{
    int answer = 0;
    answer = num1 / (double)num2 * 1000;
    return answer;
}