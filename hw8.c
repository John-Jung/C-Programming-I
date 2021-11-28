#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	
	char str[100];
	gets(str);
//	printf("%s, %d", str,strlen(str)); //È®ÀÎ¿ë
	printf("%s\n", str);
	int i;

	for (i = 0; i < strlen(str); i++) {
		if (str[i] < 'a' && str[i] > 'A') str[i] = str[i] + 32; //A~Z
		else if (str[i] > 'a' && str[i] < 'z') str[i] = str[i] - 32;//a~z
	}
	printf("%s\n", str);
}
