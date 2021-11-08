
#include <stdio.h> // use printf, scanf
#pragma warning(disable: 4996)




int main() {
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Â¦¼ö Ãâ·Â: ");
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }putchar('\n');

    printf("È¦¼ö Ãâ·Â: ");
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }putchar('\n');
    return 0;
}

