#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** R, const int k, const int n, const int Low, const int High);
void Print(int** R, const int k, const int n);
void Create(int** R, const int k, const int n, const int Low, const int High)
{
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++)
			R[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** R, const int k, const int n)
{
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << R[i][j];
		cout << endl;
	}
	cout << endl;
}
int SmallestOfMaximumElements(int** R, const int k, const int n)
{
	int min = 0;
	for (size_t i = 0; i < k; i++)
	{ 
					int index = 0;
					for (size_t j = 0; j < n; j++)
					{
						if (R[i][j] > R[i][index])
						{
							index = j;
						}
					}
					min = R[i][index];
					break;
	}
	for (int i = 0; i < k; i++)
			{
				int index = 0;
				for (int j = 1; j < n; j++)
				{
					if (R[i][j] > R[i][index])
					{
						index = j;
					}
				}
				cout << "Max element in row:  " << R[i][index] << endl;
				if (R[i][index] < min)
				{
					min = R[i][index];
				}
			}
   return min;
}
int main()
{
	srand((unsigned)time(NULL));
	int Low = 7;
	int High = 65;
	int k;
	int n;
	cout << "k = "; cin >> k;
	cout << "n = "; cin >> n;
	int** R = new int* [k];
	for (int i = 0; i < k; i++)
		R[i] = new int[n];
	Create(R, k, n, Low, High);
	Print(R, k, n);
	cout << "Min From Max " << SmallestOfMaximumElements(R, k, n) << endl;
	return 0;
}