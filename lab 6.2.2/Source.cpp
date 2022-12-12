#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int PrintArraySum(int* a, const int size, int i, int sum)
{
	if (a[i] % 2 != 0)
		sum += a[i];
	if (i < size - 1)
		return PrintArraySum(a, size, i + 1, sum);
	else
		return sum;
}

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

	
	int main()
	{
		srand((unsigned)time(NULL)); 
		const int n = 5;
		int a[n];
		int Low = -10;
		int High = 10;
		Create(a, n, Low, High, 0);
		Print(a, n, 0);
		cout << "sum = " << PrintArraySum(a, n, 0, 0) << endl;
		return 0;
	}