/* 2. Дано натуральне число n. Обчислити */
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n = 0;
	double sum = 0;

	printf("enter natural number: ");
	scanf_s("%d", &n);

	for (int k = 1; k <= n; k++)
	{
		sum += 1 / (k*pow((2*k + 1),2));
	}

	printf("sum is %f\n", sum);

	cin.get();
	return 0;
}