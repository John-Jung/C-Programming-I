#include<stdio.h>
#pragma warning(disable: 4996)



void binary(int n); //함수 선언

int main() {
    int N; scanf("%d", &N);
    binary(N);
    printf("\n");
    return 0;
}

void binary(int n) {
    int r;
    r = n % 2;
    if (n >= 2) { 
        binary(n / 2); 
    }
    printf("%d", r);
    return;
}