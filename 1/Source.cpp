#include <iostream>
#include <math.h> //��� abs
using namespace std;

int main()
{
	const int N = 10;
	int i, k = 0;
	float max, massiv[N];    //���������� �������� �������
	cout << "������� 10 ����� �����\n";
	for (i = 0; i < N; i++)
		cin >> massiv[i];    //���������� ���� �������

	max = massiv[0];

	for (i = 0; i < N; i++) //���� ������������ ������� �������
	{
		if (abs(massiv[i]) > max) 
			max = massiv[i];
	}
	cout << "\n  Max=" << max << '\n'; //����� ������������� �������� �������
}