int GCD(int a, int b)
{ // 최대공약수 구하는 함수
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int *solution(int numer1, int denom1, int numer2, int denom2)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int *answer = (int *)malloc(sizeof(int) * 2);

    int sum_num = numer1 * denom2 + numer2 * denom1; // 분자
    int sum_den = denom1 * denom2;                   // 분모

    int gcd = GCD(sum_num, sum_den); // 최대공약수 함수 호출 후 변수 gcd에 대입

    answer[0] = (int){sum_num / gcd};
    answer[1] = (int){sum_den / gcd};

    return answer;
}