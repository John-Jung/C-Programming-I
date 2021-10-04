#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int n;
	int ans = 0;
	scanf("%d", &n);
	if (n == 1) {
		printf("it is NOT Prime");
		return;
	}
	if (n == 2) {
		printf("it is Prime");
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) ans++;
	}
	
	if (ans == 0) printf("It is Prime Number");
	else printf("it is NOT Prime");
	return 0;
}