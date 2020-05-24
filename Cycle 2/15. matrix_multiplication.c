#include <stdio.h>

void enterData(int first[][10], int r1, int c1) 
{
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            scanf("%d", &first[i][j]);
        }
    }
}

void multiplyMatrices(int first[][10], int second[][10], int mult[][10], int r1, int c1, int r2, int c2) 
{
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                mult[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void display(int mult[][10], int r1, int c2)
{
    printf("Output Matrix:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d  ", mult[i][j]);
        }
		printf("\n");
    }
}

void main() {
    int first[10][10], second[10][10], mult[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix : ");
    scanf("%d %d", &r2, &c2);
	printf("Enter elements of first matrix:\n");
    enterData(first, r1, c1);
	printf("Enter elements of second matrix:\n");
    enterData(second, r2, c2);
    multiplyMatrices(first, second, mult, r1, c1, r2, c2);
    display(mult, r1, c2);
}