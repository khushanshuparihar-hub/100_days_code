//Q76: Check if a matrix is symmetric.
/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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
        printf("False\n");
        return 0;
    }
    int isSymmetric = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    printf("%s\n", isSymmetric ? "True" : "False");
    return 0;
}