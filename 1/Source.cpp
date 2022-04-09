#include <iostream>
#include <math.h> //Для abs
using namespace std;

int main()
{
	const int N = 10;
	int i, k = 0;
	float max, massiv[N];    //Происходит описание массива
	cout << "Введите 10 целых чисел\n";
	for (i = 0; i < N; i++)
		cin >> massiv[i];    //Происходит ввод массива

	max = massiv[0];

	for (i = 0; i < N; i++) //Ищем максимальный элемент массива
	{
		if (abs(massiv[i]) > max) 
			max = massiv[i];
	}
	cout << "\n  Max=" << max << '\n'; //Вывод максимального элемента массива
}