#include <stdio.h>
#include <stdlib.h>
int find(int arr[], int n)
{
    int max = arr[0], i;
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
//replace function
void replace(int A[50][50], int m, int n)
{
    int i, j;
    int primary_max;
    int secondary_max;
    int primary_diagonal[m];
    int secondary_diagonal[m];
    for (i = 0; i < m; i++)
    {
        primary_diagonal[i] = A[i][i];
    }
    primary_max = find(primary_diagonal, m);
    for (i = 0; i < m; i++)
    {
        secondary_diagonal[i] = A[i][m - i - 1];
    }
    secondary_max = find(secondary_diagonal, m);
    //to replace
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                A[i][j] = primary_max;
            }
            else
            {
                A[i][j] = secondary_max;
            }
        }
    }
}
int main()
{
    int A[50][50];
    printf("My name is Ningombam Aryamann Singh\n");
    printf("My registration number is 200911066\n");
    int rows, col, i, j;
    printf("Enter rows and column of the matrix : ");
    scanf("%d %d", &rows, &col);
    printf("Enter elements : ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    //part a;
    printf("PART A\n");
    //printing the elements;
    printf("The elements : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    //part b;
    printf("PART B\n");

    int diagonal_size;
    diagonal_size = rows;
    int primary_diagonal[diagonal_size];
    int secondary_diagonal[diagonal_size];
    //To store primary diagonal
    for (i = 0; i < rows; i++)
    {
        primary_diagonal[i] = A[i][i];
    }
    int max;
    max = find(primary_diagonal, rows);
    printf("The maximum in primary diagonal : %d\n", max);
    //To store secondary diagonal
    for (i = 0; i < rows; i++)
    {
        secondary_diagonal[i] = A[i][rows - i - 1];
    }
    max = find(secondary_diagonal, rows);
    printf("The maximum in secondary diagonal :  %d\n", max);
    replace(A, rows, col);

    //part c;
    printf("PART C\n");
    //printing in main
    printf("Array after replacing\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}