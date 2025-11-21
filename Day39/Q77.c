//Q77: Check if the elements on the diagonal of a matrix are distinct.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
        printf("False\n"); // Only square matrices have a well-defined main diagonal
        return 0;
    }
    int isDistinct = 1;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (mat[i][i] == mat[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }
    printf("%s\n", isDistinct ? "True" : "False");
    return 0;
}