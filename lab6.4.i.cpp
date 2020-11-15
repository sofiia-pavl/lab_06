#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Sub(int* a, const int size)
{
	int m = 1;
	for (int i = 0; i < size; i++)
		if (a[i] < 0)
			m *= a[i];
	return m;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int Sum(int* a, const int size, int b)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && i < b)
			S += a[i];
	return S;
}
void Inverse(int* a, const int n)
{
	int tmp;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
int main()
{
	srand((unsigned)time(NULL)); 
	int n = 1;
	cout << "n  = "; cin >> n;
	int* a = new int[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "m = " << Sub(a, n) << endl;

	int b = Max(a, n);
	cout << "S = " << Sum(a, n, b) << endl;

	Inverse(a, n);
	Print(a, n);
	return 0;
	delete []a;
}

