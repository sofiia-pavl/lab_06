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
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int Sum(int* a, const int size, int i, int S)
{
	if ((a[i] % 2 != 0 ) && (a[i] % 13 != 0))
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}

int Sumn(int* a, const int size, int i, int S)
{
	if ((a[i] % 2 != 0) && (a[i] % 13 != 0))
		S += i;
	if (i < size - 1)
		return Sumn(a, size, i + 1, S);
	else
		return S;
}

int Sub(int* a, const int size, int i)
{
	if ((a[i] % 2 == 0) && (a[i] % 13 == 0))
		a[i] = 0;
	if (i < size - 1)
		return Sub(a, size, i + 1 );

}
void Prind(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Prind(a, size, i + 1);
	else
		cout << endl;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 23;
	int a[n];
	int Low = 4;
	int High = 68;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "S = " << Sum(a, n, 0, 0) << endl;
	cout << "Sn = " << Sumn(a, n, 0, 0) << endl;
	Sub(a, n, 0);
	Print(a, n, 0);
	return 0;
}