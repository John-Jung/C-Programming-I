#include<stdio.h>

#pragma warning(disable:4996)

int arr1[6];
int arr2[6];
int temp[6];

int main()
{
    int* ptr1;
    ptr1 = arr1;

    int* ptr2;
    ptr2 = arr2;

    int i;
    for (i = 0; i < 6; i++)
        arr1[i] = i + 1;

    for (i = 0; i < 6; i++)
        arr2[i] = i + 7;
    printf("arr1: ");
    for (i = 0; i < 6; i++)
        printf("%d ", arr1[i]);
    putchar('\n');

    printf("arr2: ");
    for (i = 0; i < 6; i++)
        printf("%d ", arr2[i]);

    putchar('\n'); putchar('\n');

   // printf("arr1[1] = %d, ptr1[1] = %d", arr1[1], ptr1[1]);
    for (i = 0; i < 6; i++) {
        temp[i] = ptr2[i];
        ptr2[i] = ptr1[i];
    }
    for (i = 0; i < 6; i++)
        ptr1[i] = temp[i];

    printf("after swap\n");
    printf("arr1: ");
    for (i = 0; i < 6; i++)
        printf("%d ", ptr1[i]);

    putchar('\n');
    printf("arr2: ");
    for (i = 0; i < 6; i++)
        printf("%d ", ptr2[i]);
    return 0;
}
