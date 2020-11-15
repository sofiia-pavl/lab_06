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
int Max(int* a, const int size)
{
	int max; 
	int imax = -1; 
	for (int i = 0; i < size; i++)
	
		if (a[i] % 2 != 0)
		{
			max = a[i]; 
			imax = i; 
			break; 
		}
	if (imax == -1)
	{
		cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
		return 0; 
	} 
	for (int i = imax + 1; i < size; i++)
		if (a[i] > max && a[i] % 2 != 0)
			max = a[i];
	return max;
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
	cout << "max = " << Max(a, n) << endl;
	return 0;
}