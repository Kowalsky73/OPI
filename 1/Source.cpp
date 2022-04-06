#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const int N = 10;
	int i, k = 0;
	float max, massiv[N];    //ќписание массива
	cout << "¬ведите 10 целых чисел\n";
	for (i = 0; i < N; i++)
		cin >> massiv[i];    //¬вод массива

	max = massiv[0];

	for (i = 0; i < N; i++)
	{
		if (abs(massiv[i]) > max)
			max = massiv[i];
	}
	cout << "\n  Max=" << max << '\n';
}