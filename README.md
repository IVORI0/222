#include <stdio.h>

int main() {
    int rows, cols;

    printf("행렬의 행과 열의 크기를 입력하세요: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("행렬의 원소들을 입력하세요:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("입력된 행렬은:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
