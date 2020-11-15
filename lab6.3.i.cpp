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
template<typename T>
T Sum(T* a, const T size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0)
			S += i;
	return S;
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
	cout << "S = " << Sum(a, n) << endl;
	return 0;
	delete[]a;
}