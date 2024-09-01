#include <stdio.h>
void arrayrev(int arry[], int arr[])
{

    for (int j = 0; j < 9; j++)
    {
        arr[j] = arry[j + (9 - 2 * j - 1)];
        printf("%d", arr[j]);
    }
}
int main()
{
    int arr[9];
    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrayrev(arry, arr);

    return 0;
}