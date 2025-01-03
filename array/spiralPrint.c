#include<stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxrow = m - 1, minrow = 0, mincol = 0, maxcol = n - 1;
    int totalElements = m * n, count = 0;
    
    while (count < totalElements) {
        for (int i = mincol; i <= maxcol && count < totalElements; i++) {
            printf("%d ", arr[minrow][i]);
            count++;
        }
        minrow++;
        for (int i = minrow; i <= maxrow && count < totalElements; i++) {
            printf("%d ", arr[i][maxcol]);
            count++;
        }
        maxcol--;
        for (int i = maxcol; i >= mincol && count < totalElements; i--) {
            printf("%d ", arr[maxrow][i]);
            count++;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow && count < totalElements; i--) {
            printf("%d ", arr[i][mincol]);
            count++;
        }
        mincol++;
    }
    
    return 0;
}
