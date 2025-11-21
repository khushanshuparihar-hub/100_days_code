//Q78: Find the sum of main diagonal elements for a square matrix.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    if (r != c) {
        printf("Matrix is not square.\n");
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
        sum += mat[i][i];

    printf("%d\n", sum);
    return 0;
}