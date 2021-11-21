#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)


double arr[5];
int main() {

	double sum = 0;
	double avg = 0;
	double var = 0;
	double sum2 = 0;
	for (int i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);

	for (int i = 0; i < 5; i++)
		sum = sum + arr[i];

	avg = sum / 5;

	
	for (int i = 0; i < 5; i++) {
		var = arr[i] - avg;
		sum2 = sum2+ pow(var, 2);
	}
	sum2 = sum2 / 5;

	sum2 = sqrt(sum2);

	printf("%.3lf", sum2);
}