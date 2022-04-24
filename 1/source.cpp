#include <iostream>
#include <math.h> //Äëÿ abs
using namespace std;

int main()
{
	const int N = 10;
	int i, k = 0;
	float max, massiv[N];    //Ïðîèñõîäèò îïèñàíèå ìàññèâà
	cout << "Ââåäèòå 10 öåëûõ ÷èñåë\n";
	for (i = 0; i < N; i++)
		cin >> massiv[i];    //Ïðîèñõîäèò ââîä ìàññèâà

	max = massiv[0];

	for (i = 0; i < N; i++) //Èùåì ìàêñèìàëüíûé ýëåìåíò ìàññèâà
	{
		if (abs(massiv[i]) > max) 
			max = massiv[i];
	}
	cout << "\n  Max=" << max << '\n';
}
