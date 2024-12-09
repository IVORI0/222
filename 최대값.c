#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int size;

    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &size);

    int arr[size];

    printf("배열의 원소들을 입력하세요: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);

    printf("배열의 최대값은: %d\n", max);

    return 0;
}