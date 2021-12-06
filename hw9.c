#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable: 4996)
#define VERTICAL 5
#define HORIZONTAL 10

struct city
{
	char name[30];
	char country[30];
	int population;
};
int main() {

	struct city c[3];

	//char name[30];
	//char country[30];
	//int pop;
	for(int i = 0 ; i< 3; i++){
		scanf("%s", c[i].name); getchar();
		gets(c[i].country);
		scanf("%d", &c[i].population);
	}
	/*printf("%s\n",name);
	printf("%s\n", country);
	printf("%d\n", pop);*/

	for (int i = 0; i < 3; i++) {
		printf("%s\n", c[i].name);
		printf("%s in %s with a %d of 9635000 people", c[i].name, c[i].country, c[i].population);
		/*printf("%s\n", c[i].country);
		printf("%d\n", c[i].population);*/
	}
}