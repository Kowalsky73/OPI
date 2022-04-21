//поиск максимального элемента массива
#include <iostream>
#include <math.h> //Для abs
using namespace std; //пространство имен std

///Number of array elements and array element count
const int N = 20;
int i = 0;


/*!
* \brief Integer function main which searchs max element in the array 
* \return int value which indicates that the program completed without errors
* this value returns 0 when the program completed without errors or any integer value if the program completed with errors
*/
int main() //главная функция main
{
	float max, massiv[N];    //Происходит описание массива
	cout << "Введите 10 целых чисел\n";
	for (i = 0; i < N; i++)
		cin >> massiv[i];    //Происходит ввод массива

	max = massiv[0]; //обозначаем первый элемент - максимальным

	for (i = 0; i < N; i++) //Ищем максимальный элемент массива
	{
		if (abs(massiv[i]) > max) //проверка модулей элементов массива
			max = massiv[i]; //если модуль i-ого элемента больше модуля максимального элемента, то i-ый элемент становится максимальным
	}
	cout << "\n  Max=" << max << '\n'; //Вывод максимального элемента массива
}