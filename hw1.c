#include <stdio.h>
#pragma warning(disable: 4996)



int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	printf("%d & %d = %d\n", n, m, n & m);
	printf("%d | %d = %d\n", n, m, n | m);
	printf("%d ^ %d = %d\n", n, m, n ^ m);
}

 