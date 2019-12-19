/*
2. Заданий рядок символів, що містить цифри і пробіли. Групи цифр, що розділені пробілами (одним або декількома), вважаємо словами. Розглядаючи кожне слово як число, визначити їх суму.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

char SPACE = ' ';

char str[100];
int num[100];

void create_numbers(char[], int[]);
void get_sum(int[]);

int main()
{
	puts("enter numbers separated with space(s):");
	gets_s(str);

	create_numbers(str, num);
	get_sum(num);

	cin.get();
	return 0;
}

void create_numbers(char str[], int num[])
{
	int k = 0;
	char* delimeter = &SPACE;
	char* p;
	char* np = NULL;

	p = strtok_s(str, delimeter, &np);
	while (p != NULL)
	{
		// convert string to int
		int current = _strtoi64(p, NULL, 10);
		num[k] = current;
		k++;
		p = strtok_s(NULL, delimeter, &np);
	}
}

void get_sum(int num1[])
{
	int sum = 0;

	for (int i = 0; i < sizeof num1; i++)
	{
		sum += num1[i];
	}
	cout << "sum=" << sum << endl;
}