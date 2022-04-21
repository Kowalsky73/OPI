//����� ������������� �������� �������
#include <iostream>
#include <math.h> //��� abs
using namespace std; //������������ ���� std

///Number of array elements and array element count
const int N = 20;
int i = 0;


/*!
* \brief Integer function main which searchs max element in the array 
* \return int value which indicates that the program completed without errors
* this value returns 0 when the program completed without errors or any integer value if the program completed with errors
*/
int main() //������� ������� main
{
	float max, massiv[N];    //���������� �������� �������
	cout << "������� 10 ����� �����\n";
	for (i = 0; i < N; i++)
		cin >> massiv[i];    //���������� ���� �������

	max = massiv[0]; //���������� ������ ������� - ������������

	for (i = 0; i < N; i++) //���� ������������ ������� �������
	{
		if (abs(massiv[i]) > max) //�������� ������� ��������� �������
			max = massiv[i]; //���� ������ i-��� �������� ������ ������ ������������� ��������, �� i-�� ������� ���������� ������������
	}
	cout << "\n  Max=" << max << '\n'; //����� ������������� �������� �������
}