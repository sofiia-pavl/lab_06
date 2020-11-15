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
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if ((a[i] % 2 != 0)&&(a[i] % 13 != 0))
			S += a[i];
	return S;
}
int Sumn(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if ((a[i] % 2 != 0) && (a[i] % 13 != 0))
			S += i;
	return S;
}
int Sub(int* a, const int size)
{

	for (int i = 0; i < size; i++)
		if ((a[i] % 2 == 0) && (a[i] % 13 == 0))
		  return a[i]=0;	
	    
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 23;
	int a[n];
	int Low = 4;
	int High = 68;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(a, n) << endl;
	cout << "Sn = " << Sumn(a, n) << endl;
	Sub(a, n);
	Print(a, n);
	return 0;
}