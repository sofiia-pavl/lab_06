#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;

}
int Sub(int* a, const int size, int i, int m)
{
	if (a[i] < 0 )
		m *= a[i];
	if (i < size - 1)
		return Sub(a, size, i + 1, m);
	else
		return m;
}
int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return i;
}
int Sum(int* a, const int size, int i, int b, int S)
{
	if (a[i] > 0 && i < b )
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, b, S);
	else
		return S;
}
void Inverse(int* a, const int n, int i)
{
	int tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	if (i < n / 2 - 1)
		Inverse(a, n, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	 int n = 1;
	 cout << "n  = "; cin >> n;
	int* a = new int [n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);

	cout << "m = " << Sub(a, n, 0, 1) << endl;

	int b = Max(a, n, 1, a[0]);
	cout << "S = " << Sum(a, n, 0, b, 0) << endl;

	Inverse(a, n, 0);
	Print(a, n, 0);

	return 0;
}
