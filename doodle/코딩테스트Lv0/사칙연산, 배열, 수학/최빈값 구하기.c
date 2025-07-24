#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int solution(int array[], size_t array_len)
{
    int answer = -1;
    int count[1001] = {0};

    for (int i = 0; i < array_len; i++)
    {
        count[array[i]]++;
    }
    int max = 0; // 최댓
    int mode_count = 0;

    int size = sizeof(count) / sizeof(count[0]);
    for (int i = 0; i < size; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            answer = i;
            mode_count = 1;
        }
        else if (max == count[i])
            mode_count++;
    }
    if (mode_count == 1)
        return answer;
    else
        return -1;
}
