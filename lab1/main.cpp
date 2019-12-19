/*
2. Коло вписане в квадрат із заданою площею. Знайти площу квадрата, вписаного у це коло. Визначити у скільки разів площа вписаного квадрата менша за площу заданого квадрата.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	const int cn = 2;
	double s1, s2;
	s1 = s2 = 0;

	cout << "s1="; cin >> s1;
	s2 = s1 / cn;

	printf("s2 square is %d times bigger than s1 square\n", cn);
	printf("s2=%.2f\n", s2);

	cin.get();
	return 0;
}