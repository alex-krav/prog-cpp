/*2. Задані дійсні додатні числа а, b, с, x, y. З’ясувати, чи пройде цеглина з ребрами а, b, с в прямокутний отвір із сторонами  x та y. Просовувати цеглину у отвір дозволяється тільки так, щоб кожне із її ребер було паралельне або перпендикулярне кожній із сторін отвору.*/
#include <iostream>

using namespace std;

int main()
{
	string msg = "brick fits into hole";
	double x, y, a, b, c;
	x = y = a = b = c = 0;

	cout << "enter hole dimensions" << endl;
	cout << "x=?\b"; cin >> x;
	cout << "y=?\b"; cin >> y;

	cout << "enter brick dimensions" << endl;
	cout << "a=?\b"; cin >> a;
	cout << "b=?\b"; cin >> b;
	cout << "c=?\b"; cin >> c;

	if ((a < x && b < y) || (b < x && a < y))
	{
	}
	else if ((c < x && a < y) || (a < x && c < y))
	{
	}
	else if ((b < x && c < y) || (c < x && b < y))
	{
	}
	else
	{
		msg = "brich doesn't fit into hole";
	}

	cout << msg << endl;

	cin.get();
	return 0;
}