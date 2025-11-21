//Q79: Perform diagonal traversal of a matrix.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

        for (int d = 0; d < r + c - 1; d++) {
        int row = (d < c) ? 0 : d - c + 1;
        int col = (d < c) ? d : c - 1;

        while (row < r && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
    return 0;
}