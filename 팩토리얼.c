#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("팩토리얼을 계산할 숫자를 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%d! = %lld\n", n, factorial);

    return 0;
}